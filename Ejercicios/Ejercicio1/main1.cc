/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 16 2024
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
#include "operation.cc"
using namespace std;

/*Propósito del programa*/

void porpouse(){
  cout << "Este programa realiza el producto escalar de dos conjuntos" << endl;
}
bool check(const int argc, char *argv[], const int kCorrectNumber){
if (argc!=kCorrectNumber){
  cout<<"Número de parámetros incorrecto"<<endl;
  return false;
}
return true;
}
int main (int argc, char* argv[]){
  if (!check(argc,argv,7)){
    return 345;
  }
porpouse();
vector<double> vector1;
vector<double> vector2;
for(int i{1}; i<7;i++){
  double num=atof(argv[i]);  
  if (i<4){
   vector1.push_back(num);
  }
  else {
   vector2.push_back(num);
  }
}
double resultado= operation(vector1,vector2);
cout << resultado << endl;
}
