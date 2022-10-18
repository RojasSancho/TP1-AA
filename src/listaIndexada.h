#pragma once

#include "nodoLista.h"

using namespace std;

class ListaIndexada {

private:
  int n;
  NodoLista* ultimo;

public:
  ListaIndexada();

  ~ListaIndexada();

  void agregarAlFinal(int elemento);

  void Insertar(int indice, int elemento);

  void Borrar(int indice);

  NodoLista* Recuperar(int indice);

  void Modificar(int indice, int elemento);

  int NumElem();

};