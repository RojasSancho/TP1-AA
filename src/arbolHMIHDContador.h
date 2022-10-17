#ifndef ARBOLHMIHDCONTADOR_H
#define ARBOLHMIHDCONTADOR_H

#include "nodo.h"

using namespace std;

class ArbolHMIHDContador
{
    Nodo *raiz; 
    
    int contador;

    public:
    void Iniciar();
    void PonerRaiz(int etiqueta);
    Nodo *Raiz();
    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);
    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();
};

#endif