#include <iostream>

#include "../arbolHMIHDconPunteros.h"
#include "../nodo4.h"
//#include "../arbolHMIHDconPunteros.h"
//#include "../arbolHMIHDUltimoApuntandoPadre.h"
//#include "../arbolHMIHDContador.h"

//Algoritmo para averiguar cuál es el hermano izquierdo de un nodo n
void HermanoIzq(Nodo *nodo, )

//Algoritmo para averiguar si el árbol tiene etiquetas repetidas
//Algoritmo para averiguar cuántos niveles tiene el árbol haciendo un recorrido por niveles
//Algoritmo para listar las etiquetas del i-ésimo nivel
//Algoritmo para listar las etiquetas del árbol por niveles
//Algoritmo para eliminar subarbol de un nodo

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

//Algoritmo averiguar numero de niveles de arbol en preorden
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