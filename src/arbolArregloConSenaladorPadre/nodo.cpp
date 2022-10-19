#include "nodo.h"

using namespace std;

Nodo::Nodo(Nodo *hijoMasIzquierdo, Nodo *hermanoDerecho, int etiqueta)
{
    this->hijoMasIzquierdo = hijoMasIzquierdo;
    this->hermanoDerecho = hermanoDerecho;
    this->etiqueta = etiqueta;
    
}

Nodo::Nodo(int etiqueta)
{
    this->etiqueta = etiqueta;  
}

Nodo::Nodo()
{
    this->hijoMasIzquierdo = nullptr;
    this->hermanoDerecho = nullptr;
    this->padre = nullptr;
}

void Nodo::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int Nodo::Etiqueta() 
{
    return this->etiqueta;
}

Nodo *Nodo::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo *Nodo::HermanoDerecho()
{
    return this->hermanoDerecho;
}

Nodo *Nodo::Padre()
{
    return this->padre;
}

void Nodo::SetearHMI(Nodo* HMI)
{
    this->hijoMasIzquierdo = HMI;
}

void Nodo::SetearHD(Nodo* HD)
{
    this->hermanoDerecho = HD;
}

void Nodo::SetearPadre(Nodo* padre)
{
    this->padre = padre;
} 
