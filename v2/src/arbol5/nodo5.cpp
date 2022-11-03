#include "nodo5.h"
using namespace std;

template<typename T>

Nodo5::Nodo5(){

}

Nodo5::Nodo5(int etiqueta){
    this->etiqueta = etiqueta;
}

// Nodo5::Nodo5(Nodo5 *nodo){

// }

Nodo5::Nodo5(Nodo5 *hijoMasIzquierdo, Nodo5 *hermanoDerecho, int etiqueta)
{
    this->hijoMasIzquierdo = hijoMasIzquierdo;
    this->hermanoDerecho = hermanoDerecho;
    this->etiqueta = etiqueta;
    
}

Nodo5::~Nodo5(){
    // if (actual != nullptr){
    //     delete this->actual;
    // }

}

int *Nodo5::get(){
    //Nodo5 valorNodo = &this->actual;
    return this->etiqueta;
}

void Nodo5::modificarContenido(int etiqueta){
    // delete this->actual;
    // this->actual = new Nodo5(elemento);
    this->etiqueta = etiqueta;
}

Nodo5 *Nodo5::HijoMasIzquierdo() 
{
    return this->hijoMasIzquierdo;
}

Nodo5 *Nodo5::HermanoDerecho()
{
    return this->hermanoDerecho;
}

Nodo5 *Nodo5::Padre()
{
    return this->padre;
}

void Nodo5::SetearHMI(Nodo5* HMI)
{
    this->hijoMasIzquierdo = HMI;
}

void Nodo5::SetearHD(Nodo5* HD)
{
    this->hermanoDerecho = HD;
}

void Nodo5::SetearPadre(Nodo5* padre)
{
    this->padre = padre;
} 