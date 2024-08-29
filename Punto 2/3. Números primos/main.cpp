#include <iostream>
#include <string>

using namespace std;


//1. Determinar si un número es primo
bool numeroPrimo(int num) {
    if (num <= 1) 
        return false;
    if (num <= 3) 
        return true;
    if (num % 2 == 0 || num % 3 == 0) 
        return false;

    // Revisa los posibles divisores desde 5 en adelante
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) 
            return false;
    }

    return true;
}

//2. Identificar números primos de una lista de números
void listaNumeros(){
    
    string aux;
    int tam;

    cout<<"Ingrese el tamaño de la lista : ";
    getline(cin,aux);
    tam = stoi(aux);
    
    int listaNum[tam];
    
    // Con un ciclo for ingreso los datos al arreglo
    for (int i = 0; i < tam; i++){
        cout<<"\nIngrese el valor #"<<i+1<<" de la lista: ";
        getline(cin,aux);
        listaNum[i] = stoi(aux);
    }
    
    // Evalúo con la funcion 'numeroPrimo' si no es primo, su posicion el arreglo queda en 0
    for (int i = 0; i < tam; i++){
        if (!numeroPrimo(listaNum[i])){
            listaNum[i] = 0;
        }
    }
    
    // Muestro los primos
    cout << "\nLista de números primos, donde los no primos se reemplazaron con 0:\n";
    for (int i = 0; i < tam; i++) {
        cout << listaNum[i] << " ";
    }
    cout << endl;
}

//3. Numeros primos en rango de números
void primosEnRango() {
    int inicio, fin;
    string aux;

    cout << "\nIngrese el inicio del rango: ";
    getline(cin,aux);
    inicio = stoi(aux);    
    
    cout << "Ingrese el final del rango: ";
    getline(cin,aux);
    fin = stoi(aux);
    
    cout << "\nNúmeros primos en el rango [" << inicio << ", " << fin << "]:\n";
    
    for (int i = inicio; i <= fin; i++) {
        if (numeroPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{   
    int opcion;

    do {
        cout << "\n--------- MENU ---------\n";
        cout << "1. Evaluar si un número es primo\n";
        cout << "2. Evaluar si hay primos en una lista\n";
        cout << "3. Mostrar primos en un rango de números\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch(opcion) {
            case 1: {
                string aux;
                int numero;

                cout << "------ EVALUAR SI UN NUMERO ES PRIMO ------\n" 
                     << "Ingresa un numero: ";
                getline(cin, aux);
                numero = stoi(aux);

                if (numeroPrimo(numero))
                    cout << numero << " es primo." << endl;
                else
                    cout << numero << " no es primo." << endl;
                break;
            }
            case 2:
                cout << "\n------ EVALUAR SI HAY PRIMOS EN LISTA ------\n";
                listaNumeros();
                break;
            case 3:
                cout << "\n------ PRIMOS EN RANGO DE NÚMEROS ------\n";
                primosEnRango();
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while(opcion != 4);
}