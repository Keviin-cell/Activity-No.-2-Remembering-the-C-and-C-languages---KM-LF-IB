#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using namespace std;

class Figura
{
    protected:
    string color;
    
    public:
    Figura();
    Figura(string);
    //Metodos que vamos a heredar y sobreescribir en las clases hijas
    virtual void calcularPerimetro();
    virtual void calcularArea();
    virtual string mostrarDimensiones();
    // Destructor
    virtual ~Figura();
};
#else
class Figura;
#endif