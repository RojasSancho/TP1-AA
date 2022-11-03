#include "listaIndexada.h"

ListaIndexada::ListaIndexada() {
  n = 0;
  ultimo = nullptr;
}

ListaIndexada::~ListaIndexada() {
  delete ultimo;
}

void ListaIndexada::agregarAlFinal(int elemento) {
  NodoLista* nuevoNodo = new NodoLista(elemento);
  if(ultimo == nullptr) {
    ultimo = nuevoNodo;
  } else {
    nuevoNodo->setAnterior(ultimo);
    ultimo = nuevoNodo;
  }

  n++;
}

void ListaIndexada::Insertar(int indice, int elemento) {
  NodoLista* nuevoElemento = new NodoLista(elemento);
  if(indice == n-1) {
    nuevoElemento->setAnterior(ultimo);
    ultimo = nuevoElemento;
  } else {
    int cont = n-1;
    NodoLista* ptr = ultimo;
    while (cont > indice) {
      ptr = ptr->getAnterior();
      cont--;
    }
    nuevoElemento->setAnterior(ptr->getAnterior());
    ptr->setAnterior(nuevoElemento);
  }

  n++;

}

void ListaIndexada::Borrar(int indice) {
  if(indice == n-1) {
    ultimo = ultimo->getAnterior();
  } else {
    int cont = n-1;
    NodoLista* ptr = ultimo;
    while (cont > indice+1) {
      ptr = ptr->getAnterior();
      cont--;
    }
    ptr->setAnterior(ptr->getAnterior()->getAnterior());
  }

  n--;

}

NodoLista* ListaIndexada::Recuperar(int indice) {
  if(indice == n-1) {
    return ultimo;
  } else {
    int cont = n-1;
    NodoLista* ptr = ultimo;
    while (cont > indice) {
      ptr = ptr->getAnterior();
      cont--;
    }
    return ptr;
    
  }

}

void ListaIndexada::Modificar(int indice, int elemento) {
  if(indice == n-1) {
    ultimo->setElemento(elemento);
  } else {
    int cont = 0;
    NodoLista* ptr = ultimo;
    while (cont > indice) {
      ptr = ptr->getAnterior();
    }
    ptr->setElemento(elemento);
    
  }
}

int ListaIndexada::NumElem() {
  return n;
}