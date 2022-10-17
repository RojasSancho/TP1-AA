#include "arbolHMIHDContador.h"

using namespace std;

void ArbolHMIHDContador::Iniciar()
{
    this->contador = 0;
}

void ArbolHMIHDContador::PonerRaiz(int etiqueta)
{
    this->raiz->ModificarEtiqueta(etiqueta);
    this->contador = 1;
}

Nodo *ArbolHMIHDContador::Raiz()
{
    return this->raiz;
}

Nodo *ArbolHMIHDContador::HijoMasIzquierdo(Nodo *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo *ArbolHMIHDContador::HermanoDerecho(Nodo *nodo)
{
    return nodo->HermanoDerecho();
}

int ArbolHMIHDContador::Etiqueta(Nodo *nodo)
{
    return nodo->Etiqueta();
}

void ArbolHMIHDContador::ModificarEtiqueta(Nodo *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int ArbolHMIHDContador::NumNodos()
{
    return this->contador;
}