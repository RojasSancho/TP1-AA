#include "nodo1.h"

using namespace std;

Nodo1::Nodo1()
{
    
}

Nodo1::Nodo1(int padre, int etiqueta, int posicion)
{
    this->padre = padre;
    this->etiqueta = etiqueta;   
    this->posicion = posicion;
}

Nodo1::Nodo1(int etiqueta)
{
    this->etiqueta = etiqueta;  
}

int Nodo1::Padre()
{
    return this->padre;
}

int Nodo1::Posicion()
{
    return this->posicion;
}

Nodo *HijoMasIzquierdo(Nodo1 *nodo, arbolArregloConSenaladorPadre *arbol){
    return arbol->HijoMasIzquierdo(nodo);
}

Nodo *HermanoDerecho(Nodo1 *nodo, arbolArregloConSenaladorPadre *arbol){
    return arbol->HermanoDerecho(nodo);
}

