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
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string operation1(string& palabra_prueba){
string resultado;
vector <char> vocales {'a','e','i','o','u','A','E','I','O','U'};
for (char letra:palabra_prueba){
  if (letra>='a' && letra <= 'z'){
    if (find(vocales.begin(),vocales.end(),letra)!= vocales.end()){
    letra-=32;
  }}
  else if (letra>='A' && letra <= 'Z'){
    if (find(vocales.begin(),vocales.end(),letra)== vocales.end()){
    letra+=32;
    }
  }
resultado+=letra;
}
return resultado;
}
