#ifndef ARBOLHMIHDCONTADOR_H
#define ARBOLHMIHDCONTADOR_H

#include "nodo.h"
#include "arbol.h"

using namespace std;

class arbolHMIHDContador : public arbol
{
    Nodo *raiz; 
    
    int contador;

    //Nodo *PadreRecursivo(Nodo *nodo, Nodo *inicio);
    
    public:
    void Iniciar();
    void PonerRaiz(int etiqueta);
    Nodo *Raiz();
    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);
    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo *AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo *AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    //Nodo *Padre(Nodo *nodo);
    
};

#endif