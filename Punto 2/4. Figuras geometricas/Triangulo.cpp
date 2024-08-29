#include "Triangulo.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo() : Figura()
{
    base = 0;
    altura = 0;
}

Triangulo::Triangulo(string color, int bas, int alt)
{
    base = bas;
    altura = alt;
}

// Metodos a sobreescribir
void Triangulo::calcularArea()
{
    double area = (base * altura) / 2;
    cout<<"El área del triángulo es: "<<area<<endl;
}

string Triangulo::mostrarDimensiones()
{
    return Figura::mostrarDimensiones() + "Base: " + to_string(base) + "\nAltura: " + to_string(altura) + "\n"; 
}