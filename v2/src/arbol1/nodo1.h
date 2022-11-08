#ifndef NODO1_H
#define NODO1_H

#include <iostream>

using namespace std;

class Nodo1  {
    private:
    
    int indice;
    int padre;
    int valor;

    public:

    Nodo1();
    Nodo1(int valor,Nodo1 padre);
    ~Nodo1();

    void setIndice();
    void setPadre();
    void setValor();

    int getIndice();
    int getPadre();
    int getValor();
};

typedef Nodo1 Nodo;

#endif