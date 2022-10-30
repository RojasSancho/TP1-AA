#include <iostream>
#include <list>

//#include "../arbolHMIHDconPunteros.h"
#include "../nodo5.h"
//#include "../arbolHMIHDconPunteros.h"
#include "../arbolHMIHDUltimoApuntandoPadre.h"
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

int numNiveles(arbol arbolHMIHDUltimoApuntandoPadre){
    int NumNiveles = numNivelesRec(1, arbol->Raiz(), arbol);
    return NumNiveles;
}

int numNivelesRec(int nivel, Nodo4 *nodo, arbol arbolHMIHDUltimoApuntandoPadre){
    int NumNiveles = nivel;
    int NumNivelesTemp = nivel;
    hijo = nodo->hijoMasIzquierdo();
    if (hijo != nullptr){
        NumNiveles+=1;
        while (hijo != nullptr){
            NumNivelesTemp = NumNivelesRec(nivel, hijo, arbol);
            if (NumNivelesTemp > NumNiveles){
                NumNiveles = NumNivelesTemp;
            }
            hijo = hijo->HermanoDerecho();
        }
    }
    return NumNiveles
}

//Algoritmo para listar las etiquetas del i-ésimo nivel

void ListarEtiquetasEnUnNivel(int nivel, arbol arbolHMIHDUltimoApuntandoPadre){
    ListarEtiquetasEnUnNivelRec(nivel, arbol->Raiz(), arbol);
}

void ListarEtiquetasEnUnNivelRec(int nivel, Nodo4 *nodo, arbol arbolHMIHDUltimoApuntandoPadre){
    if (nivel == 1){
        cout<<nodo->Etiqueta();
    }
    else {
        hijo = nodo->hijoMasIzquierdo();
        while (hijo != nullptr){
            ListarEtiquetasEnUnNivelRec(nivel-1, hijo, arbol);
            hijo = hijo->HermanoDerecho();
        }
    }
}

//Algoritmo para listar las etiquetas del árbol por niveles
void ListarEtiquetasPorNivel(arbolHMIHDUltimoApuntandoPadre *arbol){
    list<Nodo4*> lista;
    lista.push_back(arbol->Raiz()); 
    while (lista.size()>0){
        nodo = lista.front();
        lista.pop_front();
        cout<<arbol->Etiqueta(nodo);
        nodoHijo = arbol->HijoMasIzquierdo(nodo);
        while (nodoHijo != nullptr){
            lista.push_back(nodoHijo);
            nodoHijo = arbol->HermanoDerecho(nodoHijo);
        }
    }
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