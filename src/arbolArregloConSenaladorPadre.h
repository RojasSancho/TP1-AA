#ifndef ARBOLARREGLOCONSENALADORPADRE_H
#define ARBOLARREGLOCONSENALADORPADRE_H

#include "nodo1.h"
#include <vector>
#include <array> 
#include "arbol.h"


using namespace std;

class arbolArregloConSenaladorPadre  : public arbol
{

    Nodo1 *nodosArreglo;

    int n;

    public:

    void Iniciar(int tamano);
    virtual void PonerRaiz(int etiqueta);
    virtual Nodo1 *Raiz();

    virtual void BorrarHoja();

    virtual Nodo1 HijoMasIzquierdo(Nodo1 *nodo);
    virtual Nodo1 HermanoDerecho(Nodo1 *nodo);

    virtual void ModificarEtiqueta(Nodo1 *nodo, int etiqueta);
    virtual int NumNodos();

    virtual Nodo1 AgregarHijo(Nodo1 *nodo, int etiqueta);
    virtual Nodo1 AgregarHijoMasDerecho(Nodo1 *nodo, int etiqueta);
    virtual Nodo1 Padre(Nodo1 *nodo);
    
};

#endif