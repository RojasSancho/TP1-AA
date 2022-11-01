#ifndef NODO1_H
#define NODO1_H

#include "nodoArbol.h"

using namespace std;

class Nodo1 : public NodoArbol
{

    int posicion;
    int padre;

    public:

    Nodo1();

    Nodo1(int padre, int etiqueta, int posicion);
    Nodo1(int etiqueta);
    int Posicion();
    int Padre();

};

#endif