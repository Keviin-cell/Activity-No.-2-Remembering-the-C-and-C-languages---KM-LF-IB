#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura
{
    private:
    int base, altura;
    
    public:
    Triangulo();
    Triangulo(string, int, int);
    // Metodos a sobreescribir
    void calcularArea();
    string mostrarDimensiones();
};
#else
class Triangulo;
#endif