ifndef Arbol5_H
#define Arbol5_H

#include <iostream>

class Arbol5 {
    public:

    Arbol5();

    ~Arbol5();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo5 nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo5 nodo, int etiqueta);

    void BorrarHoja(Nodo5 nodo);

    Nodo5 Raíz();

    Nodo5 Padre(Nodo5 nodo);

    Nodo5 HijoMásIzquierdo(Nodo5 nodo);

    Nodo5 HermanoDerecho(Nodo5 nodo);

    int Etiqueta(Nodo5 nodo);

    void ModificaEtiqueta(Nodo5 nodo, int etiqueta);

    int NumNodos();
}