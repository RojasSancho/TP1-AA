#include "nodo.h"

using namespace std;

Nodo::Nodo(Nodo *hijoMasIzquierdo, Nodo *hermanoDerecho, int etiqueta)
{
    this->hijoMasIzquierdo = hijoMasIzquierdo;
    this->hermanoDerecho = hermanoDerecho;
    this->etiqueta = etiqueta;
}

Nodo::Nodo()
{
    this->hijoMasIzquierdo = nullptr;
    this->hermanoDerecho = nullptr;
}

Nodo *Nodo::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo *Nodo::HermanoDerecho()
{
    return this->hermanoDerecho;
}

void Nodo::ModificarHMI(Nodo* nuevoHMI)
{
    this->hijoMasIzquierdo = nuevoHMI;
}

void Nodo::ModificarHD(Nodo* nuevoHD)
{
    this->hermanoDerecho = nuevoHD;
}