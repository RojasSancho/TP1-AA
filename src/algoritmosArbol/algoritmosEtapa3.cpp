#include <iostream>

#include "../arbolHMIHDconPunteros.h"
#include "../nodo4.h"
//#include "../arbolHMIHDconPunteros.h"
//#include "../arbolHMIHDUltimoApuntandoPadre.h"
//#include "../arbolHMIHDContador.h"

//Algoritmo para averiguar cuál es el hermano izquierdo de un nodo n
Nodo4 HermanoIzq(Nodo4 *nodo, arbolHMIHDUltimoApuntandoPadre *arbol){
    Nodo4 HermanoIzq = HermanoIzqRec(nodo, nodo->Raiz(), arbol);
    return HermanoIzq;
}

Nodo4 HermanoIzqRec(Nodo4 *nodo, Nodo4 *pos, arbolHMIHDUltimoApuntandoPadre *arbol){
    hijo = HijoMasIzquierdo(pos);
    Nodo4 HermanoIzq = Nodo4();
    while (hijo != nullptr && HermanoDerecho(hijo) != nodo){
        HermanoIzq = HermanoIzqRec(nodo, hijo, arbol);
        hijo = HermanoDerecho(hijo);
    }
    if (HermanoDerecho(hijo) != nodo){
        HermanoIzq = hijo;
    }
    return HermanoIzq;
}

//Algoritmo para averiguar si el árbol tiene etiquetas repetidas
bool EtiquetaRepetida(int etiqueta, arbolHMIHDUltimoApuntandoPadre *arbol){
    bool Repetida = false;
    int Repeticiones = EtiquetaRepetidaRec(etiqueta, arbol->Raiz(), arbol);
    if (Repeticiones >= 2){
        Repetida = true;
    }
    return Repetida;
}

int EtiquetaRepetidaRec(int etiqueta, Nodo4 *pos, arbolHMIHDUltimoApuntandoPadre *arbol){
    int Repeticiones = 0;
    Nodo4 *siguienteNodo = arbol->HijoMasIzquierdo(nodo);
    while (siguienteNodo != nullptr) 
    {
        if (siguienteNodo->Etiqueta()==etiqueta){
            Repeticiones+=1;
        }
        Repeticiones+= ListarEtiquetasRecursividad(siguienteNodo, arbol);
        siguienteNodo = arbol->HermanoDerecho(siguienteNodo);
    }
    return Repeticiones; 
}

//Algoritmo para averiguar cuántos niveles tiene el árbol haciendo un recorrido por niveles

int numNiveles(){

}

//Algoritmo para listar las etiquetas del i-ésimo nivel

void ListarEtiquetasEnUnNivel(){

}

//Algoritmo para listar las etiquetas del árbol por niveles
void ListarEtiquetasPorNivel(){

}

//Algoritmo para eliminar subarbol de un nodo
void EliminarSubarbol(){
    
}

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