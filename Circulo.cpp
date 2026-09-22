#include "Circulo.h"
#include <numbers>
#include <stdexcept>

Circulo::Circulo(double radio) {
    if (radio <= 0) {
        throw std::invalid_argument("El radio debe ser positivo");
    }
    this->radio = radio;
}

void Circulo::calculo() {
    perimetro = 2 * radio * std::numbers::pi;
    area = std::numbers::pi * radio * radio;
}
