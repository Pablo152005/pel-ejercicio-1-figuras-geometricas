#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica {
protected:
    double lado1;
    double lado2;
    double lado3;
public:
    Triangulo(double lado1, double lado2, double lado3);
    void calculo();
};
#endif
