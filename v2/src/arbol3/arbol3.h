#ifndef ARBOL3_H
#define ARBOL3_H

#include <iostream>

using namespace std;

class Arbol3 {
    
    public:

    Arbol3();

    ~Arbol3();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo3 nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo3 nodo, int etiqueta);

    void BorrarHoja(Nodo3 nodo);

    Nodo3 Raíz();

    Nodo3 Padre(Nodo3 nodo);

    Nodo3 HijoMásIzquierdo(Nodo3 nodo);

    Nodo3 HermanoDerecho(Nodo3 nodo);

    int Etiqueta(Nodo3 nodo);

    void ModificaEtiqueta(Nodo3 nodo, int etiqueta);

    int NumNodos();
};

typedef Arbol3 Arbol;

#endif