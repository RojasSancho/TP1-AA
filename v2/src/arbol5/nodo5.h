#ifndef NODO5_H
#define NODO5_H

#include <iostream>

using namespace std;

template<typename T> 

class Nodo5{

    friend class arbol5;

    private:

    Nodo5* hijoMasIzquierdo = nullptr;
    Nodo5* hermanoDerecho = nullptr;
    // elemento Nodo5 *actual = nullptr;
    Nodo5* padre = nullptr;
    int etiqueta;

    public:

    Nodo5();
    //Nodo5(Nodo5 *nodo);
    Nodo5(int etiqueta);
    Nodo5(Nodo5 *hijoMasIzquierdo, Nodo5 *hermanoDerecho, int etiqueta);
    ~Nodo5();
    Nodo5 *get();
    Nodo5 modificarContenido(Nodo5 elemento);

    void SetearHMI(Nodo5* HMI); //Modificar Hijo Mas Izquierdo
    void SetearHD(Nodo5* HD); //Modificar HermanoDerecho
    void SetearPadre(Nodo5* padre);  

};

//typedef Nodo5 Nodo; //!!

#endif