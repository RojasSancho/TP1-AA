#pragma once

class NodoLista {

private:
  int elemento;
  NodoLista* anterior;

public:
  NodoLista(int pElemento);

  ~NodoLista();

  int getElemento();

  NodoLista* getAnterior();

  void setElemento(int pElemento);

  void setAnterior(NodoLista* pAnterior);

};