#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "FiguraGeometrica.h"

class Rectangulo : public FiguraGeometrica {
protected:
    double base;
    double altura;
public:
    Rectangulo(double base, double altura);
    void calculo();
};
#endif
