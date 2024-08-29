#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura
{
    private:
    double radio;
    
    public:
    Circulo();
    Circulo(string, double);
    //Dos metodos del padre que voy a sobreescribir 
    void calcularPerimetro();
    void calcularArea();
    string mostrarDimensiones();
};
#else
class Circulo;
#endif