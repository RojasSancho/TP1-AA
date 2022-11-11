#include "nodo1.h"
using namespace std;

Nodo1::Nodo1(){

}

Nodo1::Nodo1(int valor,Nodo1 padre){
    this->valor = valor;
    this->padre = padre.getIndice();
}

Nodo1::~Nodo1(){

}

void Nodo1::setIndice(int indice){
    this->indice = indice;
}

void Nodo1::setPadre(int padre){
    this->padre = padre;
}

void Nodo1::setValor(int valor){
    this->valor = valor;
}

int Nodo1::getIndice(){
    return this->indice;
}

int Nodo1::getPadre(){
    return this->padre;
}

int Nodo1::getValor(){
    return this->valor;
}
