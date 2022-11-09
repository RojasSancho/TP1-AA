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

    Nodo2();
    Nodo2(int etiqueta);
    ~Nodo2();
    ListaIndexada getLista();
    void agregarElem(Nodo2 nodo);
    void setEtiqueta();
    int getEtiqueta();

};

typedef Nodo2 Nodo;

#endif