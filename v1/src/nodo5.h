#ifndef NODO5_H
#define NODO5_H

#include "nodoArbol.h"

using namespace std;

class Nodo5 : public NodoArbol
{
    Nodo5 *hijoMasIzquierdo;
    Nodo5 *hermanoDerecho;
    Nodo5 *padre;

    public:

    Nodo5();
    Nodo5(Nodo5 *hijoMasIzquierdo, Nodo5 *hermanoDerecho, int etiqueta);
    Nodo5(int etiqueta);

    Nodo5* HijoMasIzquierdo();
    Nodo5* HermanoDerecho();
    Nodo5* Padre();

    void SetearHMI(Nodo5* HMI); //Modificar Hijo Mas Izquierdo
    void SetearHD(Nodo5* HD); //Modificar HermanoDerecho
    void SetearPadre(Nodo5* padre);  
    void SetearHI(Nodo5* HI);

};

#endif