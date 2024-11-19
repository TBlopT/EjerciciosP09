#include <iostream>
#include <cmath>
int operation (const double& number){
double root {1.0};
double delta {1.0};
constexpr double e {0.0001};
while ((pow(root,2) - number) > e || (number -pow(root,2)) > e){
  if (delta>0){
    while (pow(root,2)<number){
      delta+=root;
    }
  }
  if (delta<0){
    while (pow(root,2)>number){		
    delta+=root;
    }
  }
delta*=-0.5;
}
return delta;
}

