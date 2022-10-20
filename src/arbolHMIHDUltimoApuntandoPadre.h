#ifndef ARBOLHMIHDULTIMOAPUNTANDOPADRE_H
#define ARBOLHMIHDULTIMOAPUNTANDOPADRE_H

#include "nodo5.h"

using namespace std;

class arbolHMIHDUltimoApuntandoPadre
{
    Nodo5 *raiz; 

    int NumNodosRecursivo(Nodo5 *nodo);
    
    public:
    void Iniciar();
    void PonerRaiz(int etiqueta);

    Nodo5 *Raiz();
    Nodo5 *HijoMasIzquierdo(Nodo5 *nodo);
    Nodo5 *HermanoDerecho(Nodo5 *nodo);

    int Etiqueta(Nodo5 *nodo);
    void ModificarEtiqueta(Nodo5 *nodo, int etiqueta);
    int NumNodos();

    Nodo5 *AgregarHijo(Nodo5 *nodo, int etiqueta);
    Nodo5 *AgregarHijoMasDerecho(Nodo5 *nodo, int etiqueta);
    Nodo5 *Padre(Nodo5 *nodo);
    
};

#endif