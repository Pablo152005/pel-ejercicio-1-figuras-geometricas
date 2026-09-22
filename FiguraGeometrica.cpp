#include "FiguraGeometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() {
    area = 0;
    perimetro = 0;
}

void FiguraGeometrica::mostrarInformacion() {
    std::cout << "Area: " << area << "\n";
    std::cout << "Perimetro: " << perimetro << "\n";
}
