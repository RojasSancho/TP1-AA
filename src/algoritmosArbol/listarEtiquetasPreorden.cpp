#include <iostream>

#include "../arbolHMIHDconPunteros.h"
#include "../nodo4.h"
//#include "../arbolHMIHDconPunteros.h"
//#include "../arbolHMIHDUltimoApuntandoPadre.h"
//#include "../arbolHMIHDContador.h"

void ListarEtiquetasRecursividad(Nodo4 *nodo, arbolHMIHDconPunteros *arbol)
{
    cout<<arbol->Etiqueta(nodo);
    Nodo4 *siguienteNodo = arbol->HijoMasIzquierdo(nodo);
    while (siguienteNodo != nullptr) 
    {
        ListarEtiquetasRecursividad(siguienteNodo, arbol);
        siguienteNodo = arbol->HermanoDerecho(siguienteNodo);
    } 
}

void ListarEtiquetasPreorden(arbolHMIHDconPunteros *arbol)
{
    if(arbol->NumNodos() > 0) 
    {
        Nodo4 *raiz = arbol->Raiz();
        ListarEtiquetasRecursividad(raiz, arbol);
        
    }
}


