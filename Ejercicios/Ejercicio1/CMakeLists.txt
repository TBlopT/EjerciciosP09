# CMake mínimo requerido
cmake_minimum_required(VERSION 3.1)

# Definir el nombre del proyecto (se puede cambiar en la invocación de CMake)
project(ProjectName VERSION 1.0
    DESCRIPTION "Generic project"
    LANGUAGES CXX)

# Especificar el estándar de C++
set(CMAKE_CXX_STANDARD 17)                       # Usar C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definir las carpetas de salida para los binarios y las bibliotecas
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# Definir las opciones de compilación para los diferentes modos
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Buscar todos los archivos .cc en todos los subdirectorios (recursivamente)
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/**/*.cc)

# Incluir los directorios necesarios (por si hay subdirectorios con headers)
include_directories(${PROJECT_SOURCE_DIR}/src)

# Crear un ejecutable con todos los archivos .cc encontrados
add_executable(${PROJECT_NAME} ${SOURCES})

# Establecer las características del compilador para el proyecto
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

# Añadir opciones de compilación para los ejecutables
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

############################################################
# Generación de documentación con Doxygen
############################################################

find_package(Doxygen)
option(BUILD_DOCUMENTATION "Create and install the documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
    if(NOT DOXYGEN_FOUND)
         message(FATAL_ERROR "Doxygen is needed to build the documentation.")
    endif()

    # Crear un archivo Doxyfile genérico usando el nombre del proyecto
    set(DOXYFILE_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYFILE_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    configure_file(${DOXYFILE_IN} ${DOXYFILE_OUT} @ONLY)

    message("Doxygen build started.")

    add_custom_target(doc ALL
                      COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYFILE_OUT}
                      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc
                      COMMENT "Generating API documentation with Doxygen"
                      VERBATIM)

    #    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/html DESTINATION share/doc)
endif()

