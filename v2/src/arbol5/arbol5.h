#ifndef ARBOL5_H
#define ARBOL5_H

#include <iostream>

#include "nodo5.h"

template <class Arbol>
class Arbol5 {
    public:

    Arbol5();

    ~Arbol5();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo nodo, int etiqueta);

    void BorrarHoja(Nodo nodo);

    Nodo5 Raíz();

    Nodo5 Padre(Nodo nodo);

    Nodo5 HijoMásIzquierdo(Nodo nodo);

    Nodo5 HermanoDerecho(Nodo nodo);

    int Etiqueta(Nodo nodo);

    void ModificaEtiqueta(Nodo nodo, int etiqueta);

    int NumNodos();
};

typedef Arbol5 Arbol;

#endif