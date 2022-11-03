ifndef Arbol5_H
#define Arbol5_H

#include <iostream>

class Arbol5 {
    public:

    Arbol5();

    ~Arbol5();

    void PonerRaíz(int etiqueta);

    void AgregarHijo(Nodo nodo, int etiqueta);

    void AgregarHijoMásDerecho(Nodo nodo, int etiqueta);

    void BorrarHoja(Nodo nodo);

    Nodo Raíz();

    Nodo Padre(Nodo nodo);

    Nodo HijoMásIzquierdo(Nodo nodo);

    Nodo HermanoDerecho(Nodo nodo);

    int Etiqueta(Nodo nodo);

    void ModificaEtiqueta(Nodo nodo, int etiqueta);

    int NumNodos();
}