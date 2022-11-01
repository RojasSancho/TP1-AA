#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>
using namespace std;

#include "nodoArbol.h"

class arbol{

    public:

    void Iniciar(); //Este

    int Etiqueta(NodoArbol *nodo); //Este

    virtual void PonerRaiz(int etiqueta);
    virtual NodoArbol *Raiz();

    virtual void BorrarHoja();

    virtual NodoArbol HijoMasIzquierdo(NodoArbol *nodo)=0;
    virtual NodoArbol HermanoDerecho(NodoArbol *nodo)=0;

    virtual void ModificarEtiqueta(NodoArbol *nodo, int etiqueta)=0;
    virtual int NumNodos()=0;

    virtual NodoArbol AgregarHijo(NodoArbol *nodo, int etiqueta)=0;
    virtual NodoArbol AgregarHijoMasDerecho(NodoArbol *nodo, int etiqueta)=0;
    virtual NodoArbol Padre(NodoArbol *nodo)=0;

    NodoArbol HermanoIzq(NodoArbol *nodo, arbol *arbol);
    NodoArbol HermanoIzqRec(NodoArbol *nodo, NodoArbol *pos, arbol *arbol);
    bool EtiquetaRepetida(int etiqueta, arbol *arbol);
    int EtiquetaRepetidaRec(int etiqueta, NodoArbol *pos, arbol *arbol);

    int numNiveles(arbol *arbol);
    int numNivelesRec(int nivel, NodoArbol *nodo, arbol *arbol);

    void ListarEtiquetasEnUnNivel(int nivel, arbol *arbol);
    void ListarEtiquetasEnUnNivelRec(int nivel, NodoArbol *nodo, arbol *arbol);

    void ListarEtiquetasPorNivel(arbol *arbol);

    void ListarEtiquetasRecursividad(NodoArbol *nodo, arbol *arbol);
    void ListarEtiquetasPreorden(arbol *arbol);

    void NumNivelesRecursividad(NodoArbol *nodo, int nivel, arbol *arbol);
    int NumNivelesPreorden(arbol *arbol);

    void BuscarEtiquetaRecursividad(int etiqueta, NodoArbol *nodo, arbol *arbol);

    NodoArbol *BuscarEtiqueta (int etiqueta, arbol *arbol);
};

#endif