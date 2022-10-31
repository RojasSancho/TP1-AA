#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>
using namespace std;

#include "nodoArbol.h"

class arbol{

    public:

    void Iniciar(int n);
    void PonerRaiz(int etiqueta);
    void BorrarHoja();

    Nodo Raiz();
    Nodo HijoMasIzquierdo(Nodo *nodo);
    Nodo HermanoDerecho(Nodo *nodo);

    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo1 AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo1 AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    Nodo1 Padre(Nodo *nodo);
};

#endif