#ifndef ARBOLHMIHDULTIMOAPUNTANDOPADRE_H
#define ARBOLHMIHDULTIMOAPUNTANDOPADRE_H

#include "nodo5.h"
#include "arbol.h"

using namespace std;

class arbolHMIHDUltimoApuntandoPadre : public arbol
{
    Nodo5 *raiz; 

    int NumNodosRecursivo(Nodo5 *nodo);
    
    public: //falta borrarhoja para cpp
    
    void Iniciar();
    void PonerRaiz(int etiqueta);

    Nodo5 *HijoMasIzquierdo(Nodo5 *nodo);
    Nodo5 *HermanoDerecho(Nodo5 *nodo);
    Nodo5 *Raiz();

    void ModificarEtiqueta(Nodo5 *nodo, int etiqueta);
    int NumNodos();

    Nodo5 *AgregarHijo(Nodo5 *nodo, int etiqueta);
    Nodo5 *AgregarHijoMasDerecho(Nodo5 *nodo, int etiqueta);
    Nodo5 *Padre(Nodo5 *nodo);
};

#endif