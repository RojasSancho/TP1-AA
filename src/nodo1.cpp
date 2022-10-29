#include "nodo1.h"

using namespace std;

Nodo1::Nodo1(int padre, int etiqueta, int posicion)
{
    this->padre = padre;
    this->etiqueta = etiqueta;   
    this->posicion = posicion;
}

Nodo1::Nodo1()
{

}

Nodo1::Nodo1(int etiqueta)
{
    this->etiqueta = etiqueta;  
}

void Nodo1::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int Nodo1::Etiqueta() 
{
    return this->etiqueta;
}

int Nodo1::Padre()
{
    return this->padre;
}

int Nodo1::Posicion()
{
    return this->posicion;
}


