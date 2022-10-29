#include <iostream>

#include "../arbolHMIHDconPunteros.h"
#include "../nodo4.h"
//#include "../arbolHMIHDconPunteros.h"
//#include "../arbolHMIHDUltimoApuntandoPadre.h"
//#include "../arbolHMIHDContador.h"

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


