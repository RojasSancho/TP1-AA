#include "nodo5.h"

using namespace std;

Nodo5::Nodo5(Nodo5 *hijoMasIzquierdo, Nodo5 *hermanoDerecho, int etiqueta)
{
    this->hijoMasIzquierdo = hijoMasIzquierdo;
    this->hermanoDerecho = hermanoDerecho;
    this->etiqueta = etiqueta;
    
}

Nodo5::Nodo5(int etiqueta)
{
    this->etiqueta = etiqueta;  
}

Nodo5::Nodo5()
{
    this->hijoMasIzquierdo = nullptr;
    this->hermanoDerecho = nullptr;
    this->padre = nullptr;
}

void Nodo5::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int Nodo5::Etiqueta() 
{
    return this->etiqueta;
}

Nodo5 *Nodo5::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo5 *Nodo5::HermanoDerecho()
{
    return this->hermanoDerecho;
}

Nodo5 *Nodo5::Padre()
{
    return this->padre;
}

void Nodo5::SetearHMI(Nodo5* HMI)
{
    this->hijoMasIzquierdo = HMI;
}

void Nodo5::SetearHD(Nodo5* HD)
{
    this->hermanoDerecho = HD;
}

void Nodo5::SetearPadre(Nodo5* padre)
{
    this->padre = padre;
} 
