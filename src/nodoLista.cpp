#include "nodoLista.h"

NodoLista::NodoLista(int pElemento) {
  elemento = pElemento;
  anterior = nullptr;
}

NodoLista::~NodoLista() {
  delete anterior;
}

int NodoLista::getElemento() {
  return elemento;
}

NodoLista* NodoLista::getAnterior() {
  return anterior;
}

void NodoLista::setElemento(int pElemento) {
  elemento = pElemento;
}

void NodoLista::setAnterior(NodoLista* pAnterior) {
  anterior = pAnterior;
}