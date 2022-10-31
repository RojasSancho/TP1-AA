#ifndef ARBOLHMIHDCONPUNTEROS_H
#define ARBOLHMIHDCONPUNTEROS_H

#include "nodo4.h"
#include "arbol.h"

using namespace std;

class arbolHMIHDconPunteros : public arbol
{
    Nodo4 *raiz; 

    int NumNodosRecursivo(Nodo4 *nodo);
    
    public:
    void Iniciar();
    void PonerRaiz(int etiqueta);

    Nodo4 *Raiz();
    Nodo4 *HijoMasIzquierdo(Nodo4 *nodo);
    Nodo4 *HermanoDerecho(Nodo4 *nodo);
    Nodo4 *HermanoIzquierdo(Nodo4 *nodo);

    int Etiqueta(Nodo4 *nodo);
    void ModificarEtiqueta(Nodo4 *nodo, int etiqueta);
    int NumNodos();

    Nodo4 *AgregarHijo(Nodo4 *nodo, int etiqueta);
    Nodo4 *AgregarHijoMasDerecho(Nodo4 *nodo, int etiqueta);
    Nodo4 *Padre(Nodo4 *nodo);
    
};

#endif