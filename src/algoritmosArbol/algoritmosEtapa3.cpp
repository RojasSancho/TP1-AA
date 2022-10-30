#include <iostream>

//#include "../arbolHMIHDconPunteros.h"
#include "../nodo5.h"
//#include "../arbolHMIHDconPunteros.h"
#include "../arbolHMIHDUltimoApuntandoPadre.h"
//#include "../arbolHMIHDContador.h"


//Algoritmo Listar nodos en preorden
void ListarEtiquetasRecursividad(Nodo5 *nodo, arbolHMIHDUltimoApuntandoPadre *arbol)
{
    cout<<arbol->Etiqueta(nodo);
    Nodo5 *siguienteNodo = arbol->HijoMasIzquierdo(nodo);
    while (siguienteNodo != nullptr) 
    {
        ListarEtiquetasRecursividad(siguienteNodo, arbol);
        siguienteNodo = arbol->HermanoDerecho(siguienteNodo);
    } 
}

void ListarEtiquetasPreorden(arbolHMIHDUltimoApuntandoPadre *arbol)
{
    Nodo5 *raiz = arbol->Raiz();
    ListarEtiquetasRecursividad(raiz, arbol);

}

//Algoritmo averiguar numero de niveles de arbol
int ultimoNivel = 0;
void NumNivelesRecursividad(Nodo5 *nodo, int nivel, arbolHMIHDUltimoApuntandoPadre *arbol)
{
    if ((arbol->HijoMasIzquierdo(nodo)) == nullptr) 
    {
        if (nivel > ultimoNivel) 
        {
            ultimoNivel = nivel;
        }
    } else
    {
        nodo = arbol->HijoMasIzquierdo(nodo);
        while (nodo != nullptr) 
        {
            NumNivelesRecursividad(nodo, nivel+1, arbol);
            nodo = arbol->HermanoDerecho(nodo);
        }
    }
}

int NumNivelesPreorden(arbolHMIHDUltimoApuntandoPadre *arbol)
{
    ultimoNivel = 0;
    NumNivelesRecursividad(arbol->Raiz(), 1, arbol);
    return ultimoNivel;
}

//Algoritmo Buscar una etiqueta e (Devuelve el primer nodo encontrado con etiqueta e)

Nodo5 *nodoConEtiqueta = nullptr;
void BuscarEtiquetaRecursividad(int etiqueta, Nodo5 *nodo, arbolHMIHDUltimoApuntandoPadre *arbol)
{
    if (arbol->Etiqueta(nodo) == etiqueta) 
    {
        nodoConEtiqueta = nodo;
    } else
    {
        nodo = arbol->HijoMasIzquierdo(nodo);
        while (nodo != nullptr) 
        {
            BuscarEtiquetaRecursividad(etiqueta, nodo, arbol);
            nodo = arbol->HermanoDerecho(nodo);
        }
    }
}

Nodo5 *BuscarEtiqueta (int etiqueta, arbolHMIHDUltimoApuntandoPadre *arbol) 
{
    nodoConEtiqueta = nullptr;
    BuscarEtiquetaRecursividad(etiqueta, arbol->Raiz(), arbol);
    return nodoConEtiqueta;
}