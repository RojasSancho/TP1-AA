#ifndef NODO1_H
#define NODO1_H

#include "nodoArbol.h"
#include "arbolArregloConSenaladorPadre.h"
using namespace std;

class Nodo1 : public NodoArbol
{
    Nodo1 *hijoMasIzquierdo;
    Nodo1 *hermanoDerecho;

    int posicion;
    int padre;

    public:

    Nodo1();

    Nodo *HijoMasIzquierdo(Nodo1 *nodo, arbolArregloConSenaladorPadre *arbol);
    Nodo *HermanoDerecho(Nodo1 *nodo, arbolArregloConSenaladorPadre *arbol);

    Nodo1(int padre, int etiqueta, int posicion);
    Nodo1(int etiqueta);
    int Posicion();
    int Padre();

    void ModificarHMI(Nodo* nuevoHMI);
    void ModificarHD(Nodo* nuevoHD);

};

#endif