#include "Triangulo.h"
#include <cmath>
#include <stdexcept>

Triangulo::Triangulo(double lado1, double lado2, double lado3) {
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
        lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 ||
        lado2 + lado3 <= lado1) {
        throw std::invalid_argument("Los lados no forman un triangulo");
    }
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

void Triangulo::calculo() {
    perimetro = lado1 + lado2 + lado3;
    // Formula de Heron: s es la mitad del perimetro.
    double s = perimetro / 2;
    area = std::sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}
