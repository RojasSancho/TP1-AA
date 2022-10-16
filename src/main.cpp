#include "colaArregloCircular.h"
#include <iostream>

using namespace std;

int main()
{
    ColaArregloCircular *cola = new ColaArregloCircular ();
    cola->Iniciar(10);
    cola->Encolar(5);
    cola->Encolar(20);

   // cout << cola->numeros[0] << "\n";
    cout << cola->numeros[1] << "\n";
    cout << cola->numeros[2] << "\n";
}