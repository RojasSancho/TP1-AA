#ifndef NODO1_H
#define NODO1_H

#include "nodoArbol.h"
using namespace std;

class Nodo1 : public NodoArbol
{
    public:
    
    Nodo1 *hijoMasIzquierdo;
    Nodo1 *hermanoDerecho;

    Nodo1 *anterior;
    Nodo1 *siguiente;

    int posicion;
    int padre;


    Nodo1();

    Nodo1 *HijoMasIzquierdo();
    Nodo1 *HermanoDerecho();

    Nodo1(int padre, int etiqueta, int posicion);
    Nodo1(int etiqueta);
    int Posicion();
    int Padre();


    void ModificarHMI(Nodo1* nuevoHMI);
    void ModificarHD(Nodo1* nuevoHD);

    //void ModificarEtiqueta(etiqueta);

};

#endif