#pragma once

#include "nodo2.h"

using namespace std;

class ListaIndexada {

private:
  int n;
  Nodo2* ultimo;

public:
  ListaIndexada();

  ~ListaIndexada();

  void agregarAlFinal(int elemento);

  void Insertar(int indice, int elemento);

  void Borrar(int indice);

  Nodo2* Recuperar(int indice);

  void Modificar(int indice, int elemento);

  int NumElem();

};