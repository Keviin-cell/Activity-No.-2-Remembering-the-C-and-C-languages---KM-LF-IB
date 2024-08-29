#include <iostream>
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main() {
    Cuadrado cuadrado("Rojo", 4.0);
    Rectangulo rectangulo("Verde", 5.0, 3.0);
    Triangulo triangulo("Azul", 6.0, 4.0);
    Circulo circulo("Amarillo", 2.5);

    cout << "Cuadrado:" << endl;
    cuadrado.calcularPerimetro();
    cuadrado.calcularArea();
    cout << cuadrado.mostrarDimensiones() << endl;

    cout << "Rectángulo:" << endl;
    rectangulo.calcularPerimetro();
    rectangulo.calcularArea();
    cout << rectangulo.mostrarDimensiones() << endl;

    cout << "Triángulo:" << endl;
    triangulo.calcularArea();
    cout << triangulo.mostrarDimensiones() << endl;

    cout << "Círculo:" << endl;
    circulo.calcularPerimetro();
    circulo.calcularArea();
    cout << circulo.mostrarDimensiones() << endl;

    return 0;
}
