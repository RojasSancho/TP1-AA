ifndef ARBOL4_H
#define ARBOL4_H

#include <iostream>

class Arbol4 {
    public:

    Arbol4();

    ~Arbol4();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo4 nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo4 nodo, int etiqueta);

    void BorrarHoja(Nodo4 nodo);

    Nodo4 Raíz();

    Nodo4 Padre(Nodo4 nodo);

    Nodo4 HijoMásIzquierdo(Nodo4 Nodo4);

    Nodo4 HermanoDerecho(Nodo4 nodo);

    int Etiqueta(Nodo4 nodo);

    void ModificaEtiqueta(Nodo4 nodo, int etiqueta);

    int NumNodos();
}