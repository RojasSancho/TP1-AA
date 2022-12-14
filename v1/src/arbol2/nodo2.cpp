#include "nodo2.h"
#include "listaIndexada.h"
#include "nodo2.h"

Nodo2::Nodo2(){

}

Nodo2::Nodo2(int etiqueta){
	this->etiqueta = etiqueta;
}

Nodo2::~Nodo2(){

}

ListaIndexada *Nodo2::getSublista(){
	return sublista;
}

void *Nodo2::agregarElem(Nodo2 *nodo){
	sublista->agregarAlFinal(nodo->getEtiqueta());
	if (anterior == nullptr){
		primero = sublista->ultimo;
	}
}

void Nodo2::setElemento(int etiqueta){
	this->etiqueta = etiqueta;
}

int Nodo2::getEtiqueta(){
	return etiqueta;
}

Nodo2* Nodo2::getAnterior() {
  return anterior;
}

void Nodo2::setAnterior(Nodo2* anterior) {
  this->anterior = anterior;
}