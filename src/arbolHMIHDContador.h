#ifndef ARBOLHMIHDCONTADOR_H
#define ARBOLHMIHDCONTADOR_H

#include "nodo.h"
#include "arbol.h"

using namespace std;

class arbolHMIHDContador : public arbol
{
    Nodo *raiz; 
    
    int contador;

    void BuscarEtiquetaRecursividad(int etiqueta, Nodo *nodo);
    //Nodo *PadreRecursivo(Nodo *nodo, Nodo *inicio);
    
    public: //falta borrarhoja para cpp
    
    // y también Nodo *Padre(Nodo *nodo); en cpp
    void Iniciar();
    void PonerRaiz(int etiqueta);
    Nodo *Raiz();

    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);

    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo *AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo *AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    Nodo Padre(Nodo *nodo);

    Nodo *BuscarEtiqueta (int etiqueta); 
    
};

#endif