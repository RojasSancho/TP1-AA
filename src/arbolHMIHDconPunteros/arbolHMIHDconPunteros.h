#ifndef ARBOLHMIHDCONPUNTEROS_H
#define ARBOLHMIHDCONPUNTEROS_H

#include "nodo.h"

using namespace std;

class arbolHMIHDConPunteros
{
    Nodo *raiz; 

    Nodo *Padre(Nodo *nodo);
    
    public:
    void Iniciar();
    void PonerRaiz(int etiqueta);

    Nodo *Raiz();
    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);
    Nodo *HermanoIzquierdo(Nodo *nodo);

    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo *AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo *AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    Nodo *Padre(Nodo *nodo);
    
};

#endif