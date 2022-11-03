#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>
using namespace std;

#include "nodoArbol.h"
#include "listaIndexada.h"

class arbol{

    public: //Este

    int Etiqueta(NodoArbol *nodo); //Este

    virtual void PonerRaiz(int etiqueta)=0;
    virtual NodoArbol *Raiz()=0;

    // virtual void BorrarHoja()=0;

    virtual NodoArbol *HijoMasIzquierdo(NodoArbol *nodo){
        return nodo->HijoMasIzquierdo();
    }
    virtual NodoArbol *HermanoDerecho(NodoArbol *nodo){
        return nodo->HermanoDerecho();
    }

    virtual void ModificarEtiqueta(NodoArbol *nodo, int etiqueta){
        
    }
    virtual int NumNodos(){
        return 0;
    }

    virtual NodoArbol *AgregarHijo(NodoArbol *nodo, int etiqueta){
        return nodo;
    }
    virtual NodoArbol *AgregarHijoMasDerecho(NodoArbol *nodo, int etiqueta){
        return nodo;
    }
    virtual NodoArbol *Padre(NodoArbol *nodo){
        return nodo;
    }

    NodoArbol *HermanoIzq(NodoArbol *nodo, arbol *arbol);
    NodoArbol *HermanoIzqRec(NodoArbol *nodo, NodoArbol *pos, arbol *arbol);
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

    int Profundidad(NodoArbol *nodo, arbol *arbol);

    int ProfundidadRec(int etiqueta, NodoArbol *pos, arbol *arbol);

    arbol ConstruirArbol(int k, int i, ListaIndexada L);
};

#endif