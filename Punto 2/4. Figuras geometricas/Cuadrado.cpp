#include "Cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado() : Figura()
{
    lado = 0.0;
}
Cuadrado::Cuadrado(string color, double lado){
    this->lado = lado;
}
    
// Metodos heredados
void Cuadrado::calcularPerimetro()
{
    int perim = lado * 4;
    cout<<"El perimetro es: "<<perim<<endl;
}

void Cuadrado::calcularArea()
{
    double area = lado * lado;
    cout<<"El área es: "<<area<<endl;
}

string Cuadrado::mostrarDimensiones()
{
    return Figura::mostrarDimensiones() + "Lado: " + to_string(lado) +"\n";
}