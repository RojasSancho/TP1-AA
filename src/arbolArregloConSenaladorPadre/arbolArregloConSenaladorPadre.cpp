#include "arbolArregloConSenaladorPadre.h"

using namespace std;

void arbolArregloConSenaladorPadre::Iniciar(int tamano){
    this->n = tamano;
    this->nodosArreglo = new Nodo[tamano];
}

void arbolArregloConSenaladorPadre::PonerRaiz(int etiqueta){
    Nodo *raiz = new Nodo(nullptr, etiqueta);
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
    
}
Nodo *arbolArregloConSenaladorPadre::HermanoDerecho(Nodo *nodo){
    
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
    Nodo *nuevoHijo = new Nodo(nodo, etiqueta);
    this->nodosArreglo[nodosArreglo.size()] = raiz;
    this->n+=1; 
}

Nodo *arbolArregloConSenaladorPadre::AgregarHijoMasDerecho(Nodo *nodo, int etiqueta){
    
}

Nodo *arbolArregloConSenaladorPadre::Padre(Nodo *nodo){
    return nodo->Padre();
}