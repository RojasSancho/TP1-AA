#include "nodoArbol.h"

using namespace std;

NodoArbol::NodoArbol()
{
  
}

NodoArbol::~NodoArbol()
{
    //delete etiqueta;
}

void NodoArbol::ModificarEtiqueta(int etiqueta) 
{
    this->etiqueta = etiqueta;
}

int NodoArbol::Etiqueta() 
{
    return this->etiqueta;
}