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
#include <cstdlib>
#include <cmath>
#include "operation5.h"
using namespace std;

/*Propósito del programa*/

void porpouse(){
  cout << "Este programa calcula la hipotenusa con dos catetos" << endl;
}
bool check(const int argc, char *argv[], const int kCorrectNumber){
if (argc!=kCorrectNumber){
  cout<<"Número de parámetros incorrecto"<<endl;
  return false;
}
return true;
}
int main (int argc, char* argv[]){
  if (!check(argc,argv,3)){
    return 345;
  }
porpouse();
double a = atoi(argv[1]);
double b = atoi(argv[2]);
cout << operation5(a,b) << endl;
}
