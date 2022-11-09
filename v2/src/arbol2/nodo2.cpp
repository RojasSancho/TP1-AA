#include "nodo2.h"
#include "../lista/listaIndexada.h"
#include "../lista/nodoLista.h"

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

void Nodo2::agregarElem(Nodo2 nodo){
	sublista->agregarAlFinal(nodo.getEtiqueta());
}

void Nodo2::setEtiqueta(int etiqueta){
	this->etiqueta = etiqueta;
}

int Nodo2::getEtiqueta(){
	return etiqueta;
}