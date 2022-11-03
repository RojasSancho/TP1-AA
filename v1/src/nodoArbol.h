#ifndef NODOARBOL_H
#define NODOARBOL_H

using namespace std;

class NodoArbol
{


    public:
    int etiqueta;

    virtual NodoArbol *HijoMasIzquierdo(){
        return HijoMasIzquierdo();
    }
    virtual NodoArbol *HermanoDerecho(){
        return HijoMasIzquierdo();
    }

    NodoArbol(); //ESTE
    ~NodoArbol();  
    void ModificarEtiqueta(int etiqueta); //ESTE
    int Etiqueta(); //ESTE

};  

#endif