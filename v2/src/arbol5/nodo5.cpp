#include "nodo5.h"
using namespace std;

template<typename T>

Nodo5::Nodo5(){

}

Nodo5::Nodo5(Nodo5 &elemento){
    this->actual = new Nodo5(elemento);
}

Nodo5::Nodo5(Nodo5 *nodo){

}

Nodo5::~Nodo5(){
    if (actual != nullptr){
        delete this->actual;
    }
}

Nodo5 *Nodo5::get(){
    Nodo5 valorNodo = &this->actual;
    return valorNodo;
}

Nodo5 Nodo5::modificarContenido(Nodo5 &elemento){
    delete this->actual;
    this->actual = new Nodo5(elemento);
}

