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
    
    void BuscarEtiquetaRecursividad(int etiqueta, Nodo1 *nodo);
    public:

    void Iniciar(int tamano);
    void PonerRaiz(int etiqueta);
    Nodo1 *Raiz();

    void BorrarHoja();

<<<<<<< Updated upstream
    virtual Nodo1 *HijoMasIzquierdo(Nodo1 *nodo);
    virtual Nodo1 *HermanoDerecho(Nodo1 *nodo);
=======
    Nodo1 HijoMasIzquierdo(Nodo1 *nodo);
    Nodo1 HermanoDerecho(Nodo1 *nodo);
>>>>>>> Stashed changes

    void ModificarEtiqueta(Nodo1 *nodo, int etiqueta);
    int NumNodos();

    Nodo1 AgregarHijo(Nodo1 *nodo, int etiqueta);
    Nodo1 AgregarHijoMasDerecho(Nodo1 *nodo, int etiqueta);
    Nodo1 Padre(Nodo1 *nodo);
    
    Nodo1 *BuscarEtiqueta (int etiqueta);
};

#endif