#include "nodo4.h"

using namespace std;

Nodo4::Nodo4(Nodo4 *hijoMasIzquierdo, Nodo4 *hermanoDerecho, int etiqueta)
{
    this->hijoMasIzquierdo = hijoMasIzquierdo;
    this->hermanoDerecho = hermanoDerecho;
    this->etiqueta = etiqueta;
    
}

Nodo4::Nodo4(int etiqueta)
{
    this->etiqueta = etiqueta;  
}

Nodo4::Nodo4()
{
    this->hijoMasIzquierdo = nullptr;
    this->hermanoDerecho = nullptr;
    this->padre = nullptr;
    this->hermanoIzquierdo = nullptr;
}

void Nodo4::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int Nodo4::Etiqueta() 
{
    return this->etiqueta;
}

Nodo4 *Nodo4::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo4 *Nodo4::HermanoIzquierdo()
{
    return this->hermanoIzquierdo;
}

Nodo4 *Nodo4::HermanoDerecho()
{
    return this->hermanoDerecho;
}

Nodo4 *Nodo4::Padre()
{
    return this->padre;
}

void Nodo4::SetearHMI(Nodo4* HMI)
{
    this->hijoMasIzquierdo = HMI;
}

void Nodo4::SetearHD(Nodo4* HD)
{
    this->hermanoDerecho = HD;
}

void Nodo4::SetearPadre(Nodo4* padre)
{
    this->padre = padre;
} 

void Nodo4::SetearHI(Nodo4* HI)
{
    this->hermanoIzquierdo = HI;
}