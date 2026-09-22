#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica {
protected:
    double radio;
public:
    Circulo(double radio);
    void calculo();
};
#endif
