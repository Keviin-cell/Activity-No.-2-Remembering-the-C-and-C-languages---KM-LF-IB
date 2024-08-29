#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

// Clase derivada Rectangulo
class Rectangulo : public Figura {
private:
    double ancho;
    double alto;

public:
    Rectangulo();
    Rectangulo(string, double, double);

    // Métodos heredados
    void calcularPerimetro();
    void calcularArea();
    string mostrarDimensiones();
};

#endif 