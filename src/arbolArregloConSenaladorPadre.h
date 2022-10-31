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

    void Iniciar(int n);
    void PonerRaiz(int etiqueta);
    void BorrarHoja();

    Nodo1 Raiz();
    Nodo1 HijoMasIzquierdo(Nodo1 *nodo);
    Nodo1 HermanoDerecho(Nodo1 *nodo);

    int Etiqueta(Nodo1 *nodo);
    void ModificarEtiqueta(Nodo1 *nodo, int etiqueta);
    int NumNodos();

    Nodo1 AgregarHijo(Nodo1 *nodo, int etiqueta);
    Nodo1 AgregarHijoMasDerecho(Nodo1 *nodo, int etiqueta);
    Nodo1 Padre(Nodo1 *nodo);
    
};

#endif