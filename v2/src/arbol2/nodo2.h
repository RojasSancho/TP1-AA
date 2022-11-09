#ifndef NODO2_H
#define NODO2_H

#include <iostream>

#include "../lista/listaIndexada.h"
#include "../lista/nodoLista.h"

using namespace std;

class Nodo2  {
    private:

    public:
    
    ListaIndexada *sublista;
    int etiqueta;
    Nodo2 *anterior;
    Nodo2 *primero;

    Nodo2();
    Nodo2(int etiqueta);
    ~Nodo2();
    ListaIndexada *getSublista();
    void agregarElem(Nodo2 nodo);
    void setElemento(int etiqueta);
    int getEtiqueta();
    Nodo2 *getAnterior();
    void setAnterior(Nodo2* anterior);

};

typedef Nodo2 Nodo;

#endif