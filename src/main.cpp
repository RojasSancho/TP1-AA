#include "colaArregloCircular.h"
#include <iostream>

using namespace std;

int main()
{
    ColaArregloCircular *cola = new ColaArregloCircular ();
    cola->Iniciar(5);
    cola->Encolar(5);
    cola->Encolar(20);
    cola->Encolar(3);
    cola->Encolar(3);
    cola->Encolar(6);
    
    cola->Desencolar();
    cola->Encolar(7);
    cola->Desencolar();
    cola->Encolar(8);
    //cout << cola->Desencolar();
    

   // cout << cola->numeros[0] << "\n";
    cout << cola->numeros[0] << "\n";
    cout << cola->numeros[1] << "\n";
    cout << cola->numeros[2] << "\n";
    cout << cola->numeros[3] << "\n";
    cout << cola->numeros[4] << "\n";
    cout << cola->numeros[5] << "\n";
    cout << cola->numeros[7] << "\n";
}