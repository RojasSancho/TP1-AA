#ifndef ARBOL1_H
#define ARBOL1_H

#include <iostream>

#include "nodo1.h"

class Arbol1 {

    private:
    Nodo1 *arreglo;
    int ultimo;
    int actual;
    int numElem;

    public:

    Arbol1();

    Arbol1(int cantidad);

    ~Arbol1();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo1 nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo1 nodo, int etiqueta);

    void BorrarHoja(Nodo1 nodo);

    Nodo1 Raíz();

    Nodo1 Padre(Nodo1 nodo);

    Nodo1 HijoMásIzquierdo(Nodo1 nodo);

    Nodo1 HermanoDerecho(Nodo1 nodo);

    int Etiqueta(Nodo1 nodo);

    void ModificaEtiqueta(Nodo1 nodo, int etiqueta);

    int NumNodos();
};

typedef Arbol1 Arbol;

#endif