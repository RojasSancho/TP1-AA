#include "arbolArregloConSenaladorPadre.h"
#include <array> 

using namespace std;

void arbolArregloConSenaladorPadre::Iniciar(int tamano){
    this->n = tamano;
    this->nodosArreglo = new Nodo1[tamano];
}

void arbolArregloConSenaladorPadre::PonerRaiz(int etiqueta){
    Nodo1 *raiz = new Nodo1(0, etiqueta, 0);
    this->nodosArreglo[0] = *raiz;
    this->n+=1; 
}

void arbolArregloConSenaladorPadre::BorrarHoja(){
    this->n-=1;
}

Nodo1 arbolArregloConSenaladorPadre::Raiz(){
    return nodosArreglo[0];
}

Nodo1 arbolArregloConSenaladorPadre::HijoMasIzquierdo(Nodo1 *nodo){
    int pos = nodo->Posicion();
    int cont = nodo->Posicion()+1;
    Nodo1 nodoTemp = nodosArreglo[cont];
    while (nodoTemp.Padre() != pos){
        cont+=1;
        nodoTemp = nodosArreglo[cont];
    }
    return nodosArreglo[cont];
}

Nodo1 arbolArregloConSenaladorPadre::HermanoDerecho(Nodo1 *nodo){
    int posPadre = nodo->Padre();
    int cont = nodo->Posicion()-1;
    Nodo1 nodoTemp = nodosArreglo[cont];
    while (nodoTemp.Padre() != posPadre){
        cont-=1;
        nodoTemp = nodosArreglo[cont];
    }
    return nodosArreglo[cont];
}

int arbolArregloConSenaladorPadre::Etiqueta(Nodo1 *nodo){
    return nodo->Etiqueta();
}

void arbolArregloConSenaladorPadre::ModificarEtiqueta(Nodo1 *nodo, int etiqueta){
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolArregloConSenaladorPadre::NumNodos(){
    return n;
}

void arbolArregloConSenaladorPadre::AgregarHijo(Nodo1 *nodo, int etiqueta){
    Nodo1 *nuevoHijo = new Nodo1(nodo->Posicion(), etiqueta, n);
    this->nodosArreglo[n] = *nuevoHijo;
    this->n+=1; 
}

void arbolArregloConSenaladorPadre::AgregarHijoMasDerecho(Nodo1 *nodo, int etiqueta){
    int pos = nodo->Posicion();
    int cont = 1;
    Nodo1 nodoTemp = nodosArreglo[1];
    while (nodoTemp.Padre() != pos){
        cont+=1;
        nodoTemp = nodosArreglo[cont];
    }
    nodosArreglo[cont].ModificarEtiqueta(etiqueta);
    Nodo1 *nuevoHijo = new Nodo1(nodo->Posicion(), nodoTemp.Etiqueta(), n);
    this->nodosArreglo[n] = *nuevoHijo;
    this->n+=1;
}

Nodo1 arbolArregloConSenaladorPadre::Padre(Nodo1 *nodo){
    return nodosArreglo[nodo->Padre()];
}