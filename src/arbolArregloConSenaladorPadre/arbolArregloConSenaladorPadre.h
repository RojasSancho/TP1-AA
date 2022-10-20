#ifndef ARBOLARREGLOCONSENALADORPADRE_H
#define ARBOLARREGLOCONSENALADORPADRE_H

#include "nodo.h"
#include <vector>
#include <array> 


using namespace std;

class arbolArregloConSenaladorPadre
{

    Nodo * nodosArreglo;

    int n;
    
    public:

    void Iniciar(int n);
    void PonerRaiz(int etiqueta);
    void BorrarHoja(Nodo *nodo);

    Nodo *Raiz();
    Nodo *HijoMasIzquierdo(Nodo *nodo);
    Nodo *HermanoDerecho(Nodo *nodo);

    int Etiqueta(Nodo *nodo);
    void ModificarEtiqueta(Nodo *nodo, int etiqueta);
    int NumNodos();

    Nodo *AgregarHijo(Nodo *nodo, int etiqueta);
    Nodo *AgregarHijoMasDerecho(Nodo *nodo, int etiqueta);
    Nodo *Padre(Nodo *nodo);
    
};

#endif