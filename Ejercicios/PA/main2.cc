/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 18 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */
using namespace std;
#include <iostream>

int main(){
int n;
cin >>n;
int contador{1};
int contador1{0};
int contador2{0};
int resto;
while (n>0){
  resto=n%10;
  if (contador%2==0){
  contador1=contador1+resto;
  }
  else {
  contador2=contador2+resto;
  }
  contador++;
  n=n/10;
}
if (contador1==contador2){
cout <<"si";
}
else{cout <<"no";} 
}
