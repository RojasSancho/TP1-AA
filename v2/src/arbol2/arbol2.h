#ifndef ARBOL2_H
#define ARBOL2_H

#include <iostream>

#include "nodo2.h"

class Arbol2 {

    public:

    Arbol2();

    ~Arbol2();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo2 nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo2 nodo, int etiqueta);

    void BorrarHoja(Nodo2 nodo);

    Nodo2 Raíz();

    Nodo2 Padre(Nodo2 nodo);

    Nodo2 HijoMásIzquierdo(Nodo2 nodo);

    Nodo2 HermanoDerecho(Nodo2 nodo);

    int Etiqueta(Nodo2 nodo);

    void ModificaEtiqueta(Nodo2 nodo, int etiqueta);

    int NumNodos();
};

typedef Arbol2 Arbol;

#endif
