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

Nodo1 *Nodo1::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo1 *Nodo1::HermanoDerecho()
{
    return this->hermanoDerecho;
}

void Nodo1::ModificarHMI(Nodo1* nuevoHMI)
{
    this->hijoMasIzquierdo = nuevoHMI;
}

void Nodo1::ModificarHD(Nodo1* nuevoHD)
{
    this->hermanoDerecho = nuevoHD;
}

