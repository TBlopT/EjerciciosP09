/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 17 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */
#include <iostream>
#include <cmath> // Para std::fabs

// Constante de error permitido
const double EPSILON = 1e-4;

// Función para calcular la raíz cuadrada aproximada
double approximate_root(double number) {
    double root = 1.0;  // Valor inicial para la raíz
    double delta = 1.0; // Paso inicial para ajustar la raíz

    // Mientras la diferencia entre root² y number sea mayor que EPSILON
    while (std::fabs(root * root - number) > EPSILON) {
        if (delta > 0) {
            // Si delta es positivo, aumenta root hasta que root² >= number
            while (root * root < number) {
                root += delta;
            }
        } else {
            // Si delta es negativo, disminuye root hasta que root² <= number
            while (root * root > number) {
                root += delta;
            }
        }

        // Ajustar el paso de delta reduciéndolo a la mitad y cambiando el signo
        delta *= -0.5;
    }

    // Devuelve la raíz aproximada
    return root;
}

int main() {
    double number;

    // Solicitar al usuario un número mayor que cero
    std::cout << "Introduce un número real mayor que cero: ";
    std::cin >> number;

    if (number <= 0) {
        std::cerr << "El número debe ser mayor que cero." << std::endl;
        return 1;
    }

    // Calcular la raíz cuadrada aproximada
    double result = approximate_root(number);

    // Mostrar el resultado
    std::cout << "La raíz cuadrada aproximada de " << number
              << " con un error de ±" << EPSILON << " es: " << result << std::endl;

    return 0;
}
