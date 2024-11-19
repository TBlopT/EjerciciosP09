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
#include <vector>
using namespace std;
double operation (const vector<double>& vector1, const vector<double>& vector2){
  /**Mensaje de ERROR*/
  if (vector1.size()!=vector2.size()){
    cout << "ERROR: ¡Los conjuntos tienen diferentes tamaños!" << endl;
  return 0;
  }
  /**Operación*/
  double resultado{0};
  for (size_t i=0; i<vector1.size();i++){
    resultado+=vector1[i]*vector2[i];
  }
return resultado;
}
