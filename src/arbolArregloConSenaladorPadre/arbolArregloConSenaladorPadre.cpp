#include "arbolArregloConSenaladorPadre.h"
#include <array> 

using namespace std;

void arbolArregloConSenaladorPadre::Iniciar(int tamano){
    this->n = tamano;
    this->nodosArreglo = new Nodo[tamano];
}

void arbolArregloConSenaladorPadre::PonerRaiz(int etiqueta){
    Nodo *raiz = new Nodo(nullptr, etiqueta, 0);
    this->nodosArreglo[0] = raiz;
    this->n+=1; 
}

void arbolArregloConSenaladorPadre::BorrarHoja(Nodo *nodo){
    this->n-=1;
}

Nodo *arbolArregloConSenaladorPadre::Raiz(){
    return this->nodosArreglo[0];
}

Nodo *arbolArregloConSenaladorPadre::HijoMasIzquierdo(Nodo *nodo){
    int pos = nodo->Posicion();
    cont = nodo->Posicion()+1;
    Nodo *nodoTemp = nodosArreglo[cont];
    while (nodoTemp->Padre() != pos){
        cont+=1;
        nodoTemp = nodosArreglo[cont];
    }
    return nodosArreglo[cont];
}

Nodo *arbolArregloConSenaladorPadre::HermanoDerecho(Nodo *nodo){
    int pos = nodo->Padre();
    cont = nodo->Posicion()-1;
    Nodo *nodoTemp = nodosArreglo[cont];
    while (nodoTemp->Padre() != pos){
        cont-=1;
        nodoTemp = nodosArreglo[cont];
    }
    return nodosArreglo[cont];
}

int arbolArregloConSenaladorPadre::Etiqueta(Nodo *nodo){
    return nodo->Etiqueta();
}

void arbolArregloConSenaladorPadre::ModificarEtiqueta(Nodo *nodo, int etiqueta){
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolArregloConSenaladorPadre::NumNodos(){
    return n;
}

Nodo *arbolArregloConSenaladorPadre::AgregarHijo(Nodo *nodo, int etiqueta){
    Nodo *nuevoHijo = new Nodo(nodo, etiqueta, n);
    this->nodosArreglo[n] = raiz;
    this->n+=1; 
}

Nodo *arbolArregloConSenaladorPadre::AgregarHijoMasDerecho(Nodo *nodo, int etiqueta){
    int pos = nodo->Posicion();
    int cont = 1;
    Nodo *nodoTemp = nodosArreglo[1];
    while (nodoTemp->Padre() != pos){
        cont+=1;
        nodoTemp = nodosArreglo[cont];
    }
    nodosArreglo[cont]->ModificarEtiqueta(etiqueta);
    Nodo *nuevoHijo = new Nodo(nodo, nodoTemp->Etiqueta(), n);
    this->nodosArreglo[n] = nuevoHijo;
    this->n+=1;
}

Nodo *arbolArregloConSenaladorPadre::Padre(Nodo *nodo){
    return nodosArreglo[nodo->Padre()];
}