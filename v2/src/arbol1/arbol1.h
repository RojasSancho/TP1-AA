#ifndef ARBOL1_H
#define ARBOL1_H

#include <iostream>

class Arbol2 {

    public:

    Arbol2();

    ~Arbol2();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo nodo, int etiqueta);

    void BorrarHoja(Nodo nodo);

    Nodo Raíz();

    Nodo Padre(Nodo nodo);

    Nodo HijoMásIzquierdo(Nodo nodo);

    Nodo HermanoDerecho(Nodo nodo);

    int Etiqueta(Nodo nodo);

    void ModificaEtiqueta(Nodo nodo, int etiqueta);

    int NumNodos();
};

typedef Arbol1 Arbol;

#endif