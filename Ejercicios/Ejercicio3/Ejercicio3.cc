/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 19 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */
#include <iostream>
#include <vector>

double evaluatePolynomial(const std::vector<double>& coefficients, double value) {
    double result = 0.0;
    for (int i = coefficients.size() - 1; i >= 0; --i) {
        result = result * value + coefficients[i];
    }
    return result;
}

int main() {
    std::vector<double> coefficients1 = {2, 4, 6, 8};
    double value1 = 0;
    std::cout << "Resultado 1: " << evaluatePolynomial(coefficients1, value1) << std::endl;
    std::vector<double> coefficients2 = {1, 3, 5};
    double value2 = 2;
    std::cout << "Resultado 2: " << evaluatePolynomial(coefficients2, value2) << std::endl;
    std::vector<double> coefficients3 = {1, 1, 1, 1, 1};
    double value3 = 4;
    std::cout << "Resultado 3: " << evaluatePolynomial(coefficients3, value3) << std::endl;

    return 0;
}

