#include "Figura.h"
#include <iostream>


/*constructores de la clase*/
Figura::Figura()
{
    color = "";
}

Figura::Figura(string color)
{
    this->color = color;
}

// Metodos que vamos a sobreescribir (polimorfismo) en las clases hijas
void Figura::calcularPerimetro()
{
    cout<<"El calculo del perimetro de la figura geométrica"<<endl;
}

void Figura::calcularArea()
{
    cout<<"El calculo del area de la figura geométrica"<<endl;
}

string Figura::mostrarDimensiones(){
    return "Color: "+color+"\n";
}

Figura::~Figura() {}