#include "colaArregloCircular.h"
#include "arbolHMIHDContador.h"
#include <iostream>

using namespace std;

int main()
{
    /*
    ColaArregloCircular *cola = new ColaArregloCircular();
    cola->Iniciar(5);
    cola->Encolar(5);
    cola->Encolar(20);
    cola->Encolar(3);
    cola->Encolar(3);
    cola->Encolar(6);
    
    cola->Desencolar();
    cola->Desencolar();
    
    cola->Encolar(7);
    cola->Encolar(8);
    cola->Encolar(9);
    
    
    cout << cola->numeros[0] << "\n";
    cout << cola->numeros[1] << "\n";
    cout << cola->numeros[2] << "\n";
    cout << cola->numeros[3] << "\n";
    cout << cola->numeros[4] << "\n";
    cout << cola->numeros[5] << "\n";
    cout << cola->numeros[7] << "\n";
    */
    
    ArbolHMIHDContador *arbol = new ArbolHMIHDContador();
    arbol->Iniciar();
    arbol->PonerRaiz(1);
    arbol->AgregarHijo(arbol->Raiz(), 2);
    arbol->AgregarHijoMasDerecho(arbol->Raiz(), 3);

    Nodo *nodo = arbol->Raiz()->HijoMasIzquierdo()->HermanoDerecho();
    Nodo *nodo2 = arbol->AgregarHijo(nodo, 4);
    
    Nodo *padre = arbol->Padre(nodo2);

    


}