#include "nodo.h"

using namespace std;

Nodo::Nodo(int padre, int etiqueta, int posicion)
{
    this->padre = padre;
    this->etiqueta = etiqueta;   
    this->posicion = posicion;
}

Nodo::Nodo()
{

}

void Nodo::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int Nodo::Etiqueta() 
{
    return this->etiqueta;
}

int *Nodo::Padre()
{
    return this->padre;
}

Nodo *Nodo::Posicion()
{
    return this->posicion;
}

void Nodo::SetearPadre(Nodo* padre)
{
    this->padre = padre;
} 
