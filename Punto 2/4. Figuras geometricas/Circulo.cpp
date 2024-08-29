#include "Circulo.h"
#include <iostream>
#include <cmath>

Circulo::Circulo() : Figura()
{
    radio = 0;
}
    
Circulo:: Circulo(string color, double radio): Figura(color)
{
    this->radio = radio;
}
    
void Circulo::calcularPerimetro()
{
    double perim = M_PI * (2 * radio);
    cout<<"El perimetro del circulo es: "<<perim<<endl;
}

void Circulo::calcularArea()
{
    double area = M_PI * radio * radio;
    cout<<"El area del circulo que tiene radio :"<<radio<<" es: "<<area<<endl;
}

string Circulo::mostrarDimensiones()
{
    return "Color: "+color+"\tRadio:"+to_string(radio)+"\n";
}