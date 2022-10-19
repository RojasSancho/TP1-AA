#ifndef ARBOLHMIHDULTIMOAPUNTANDOPADRE_H
#define ARBOLHMIHDULTIMOAPUNTANDOPADRE_H

#include "nodo.h"

using namespace std;

class arbolHMIHDUltimoApuntandoPadre
{
    Nodo *raiz; 

    vector<Nodo> nodos;

    int tamano;
    Nodo *Padre(Nodo *nodo);
    
    public:
    void Iniciar(int tamano);
    void PonerRaiz(int etiqueta);

    Nodo *Raiz();
    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);

    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo *AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo *AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    Nodo *Padre(Nodo *nodo);
    
};

#endif