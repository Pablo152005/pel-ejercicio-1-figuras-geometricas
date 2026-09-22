#include "Rectangulo.h"
#include <stdexcept>

Rectangulo::Rectangulo(double base, double altura) {
    if (base <= 0 || altura <= 0) {
        throw std::invalid_argument("Base y altura deben ser positivas");
    }
    this->base = base;
    this->altura = altura;
}

void Rectangulo::calculo() {
    perimetro = 2 * base + 2 * altura;
    area = base * altura;
}
