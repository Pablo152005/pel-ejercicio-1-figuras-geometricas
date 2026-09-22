#include <iostream>
#include <iomanip>
#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"

int main() {
    std::cout << std::fixed << std::setprecision(2);

    Circulo circulo(2);
    circulo.calculo();
    std::cout << "CIRCULO\n";
    circulo.mostrarInformacion();

    Rectangulo rectangulo(4, 3);
    rectangulo.calculo();
    std::cout << "\nRECTANGULO\n";
    rectangulo.mostrarInformacion();

    Triangulo triangulo(3, 4, 5);
    triangulo.calculo();
    std::cout << "\nTRIANGULO\n";
    triangulo.mostrarInformacion();

    return 0;
}
