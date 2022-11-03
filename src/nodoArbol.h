#ifndef NODOARBOL_H
#define NODOARBOL_H

#include "arbol.h"

using namespace std;

class NodoArbol
{


    public:
    int etiqueta;

    virtual NodoArbol *HijoMasIzquierdo(NodoArbol *nodo, arbol *arbol){
        return HijoMasIzquierdo(nodo, arbol);
    }
    virtual NodoArbol *HermanoDerecho(NodoArbol *nodo, arbol *arbol){
        return HijoMasIzquierdo(nodo, arbol);
    }

    NodoArbol(); //ESTE
    ~NodoArbol();  
    void ModificarEtiqueta(int etiqueta); //ESTE
    int Etiqueta(); //ESTE

};  

#endif