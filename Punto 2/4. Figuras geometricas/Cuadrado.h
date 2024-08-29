#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

// Clase derivada Cuadrado
class Cuadrado : public Figura {
private:
    double lado;

public:
    Cuadrado();
    Cuadrado(string, double);
    
    // Metodos heredados
    void calcularPerimetro();
    void calcularArea();
    string mostrarDimensiones();
};
#else
class Cuadrado;
#endif 
