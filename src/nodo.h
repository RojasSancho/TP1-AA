#ifndef NODO_H
#define NODO_H

#include "nodoArbol.h"

using namespace std;

class Nodo : public NodoArbol
{
    Nodo *hijoMasIzquierdo;
    Nodo *hermanoDerecho;

    public:
    Nodo();
    Nodo(Nodo *hijoMasIzquierdo, Nodo *hermanoDerecho, int etiqueta);

    Nodo *HijoMasIzquierdo();
    Nodo *HermanoDerecho();

    void ModificarHMI(Nodo* nuevoHMI); //Modificar Hijo Mas Izquierdo
    void ModificarHD(Nodo* nuevoHD); //Modificar HermanoDerecho
};  

#endif