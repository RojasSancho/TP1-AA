#ifndef ARBOLARREGLOCONSENALADORPADRE_H
#define ARBOLARREGLOCONSENALADORPADRE_H

#include "nodo1.h"
#include <vector>
#include <array> 


using namespace std;

class arbolArregloConSenaladorPadre
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

    void AgregarHijo(Nodo1 *nodo, int etiqueta);
    void AgregarHijoMasDerecho(Nodo1 *nodo, int etiqueta);
    Nodo1 Padre(Nodo1 *nodo);
    
};

#endif