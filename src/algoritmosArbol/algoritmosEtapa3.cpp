#include <iostream>
#include <list>

//#include "../arbolHMIHDconPunteros.h"
#include "../nodo5.h"
#include "../nodo4.h"
#include "../nodoArbol.h"
//#include "../arbolHMIHDconPunteros.h"
#include "../arbolHMIHDUltimoApuntandoPadre.h"
#include "../arbol.h"
//#include "../arbolHMIHDContador.h"

//Algoritmo para averiguar cuál es el hermano izquierdo de un nodo n
NodoArbol *arbol::HermanoIzq(NodoArbol *nodo, arbol *arbol){
    NodoArbol *HermanoIzq = HermanoIzqRec(nodo, arbol->Raiz(), arbol);
    return HermanoIzq;
}

NodoArbol *arbol::HermanoIzqRec(NodoArbol *nodo, NodoArbol *pos, arbol *arbol){
    NodoArbol *hijo = HijoMasIzquierdo(pos);
    NodoArbol *HermanoIzq = HijoMasIzquierdo(pos);
    NodoArbol *HermanoDer = HermanoDerecho(hijo);
    while (hijo != nullptr && HermanoDer != nodo){
        HermanoIzq = HermanoIzqRec(nodo, hijo, arbol);
        hijo = HermanoDer;
    }
    if (HermanoDer != nodo){
        HermanoIzq = hijo;
    }
    return HermanoIzq;
}

//Algoritmo para averiguar si el árbol tiene etiquetas repetidas
bool arbol::EtiquetaRepetida(int etiqueta, arbol *arbol){
    bool Repetida = false;
    int Repeticiones = EtiquetaRepetidaRec(etiqueta, arbol->Raiz(), arbol);
    if (Repeticiones >= 2){
        Repetida = true;
    }
    return Repetida;
}

int arbol::EtiquetaRepetidaRec(int etiqueta, NodoArbol *pos, arbol *arbol){
    int Repeticiones = 0;
    NodoArbol *siguienteNodo = arbol->HijoMasIzquierdo(pos);
    while (siguienteNodo != nullptr) 
    {
        if (siguienteNodo->Etiqueta()==etiqueta){
            Repeticiones+=1;
        }
        Repeticiones+= EtiquetaRepetidaRec(etiqueta, siguienteNodo, arbol);
        siguienteNodo = arbol->HermanoDerecho(siguienteNodo);
    }
    return Repeticiones; 
}

//Algoritmo para averiguar cuántos niveles tiene el árbol haciendo un recorrido por niveles


int arbol::numNiveles(arbol *arbol){
    int NumNiveles = numNivelesRec(1, arbol->Raiz(), arbol);
    return NumNiveles;
}

int arbol::numNivelesRec(int nivel, NodoArbol *nodo, arbol *arbol){
    int NumNiveles = nivel;
    int NumNivelesTemp = nivel;
    NodoArbol *hijo = HijoMasIzquierdo(nodo);
    if (hijo != nullptr){
        NumNiveles+=1;
        while (hijo != nullptr){
            NumNivelesTemp = numNivelesRec(nivel, hijo, arbol);
            if (NumNivelesTemp > NumNiveles){
                NumNiveles = NumNivelesTemp;
            }
            hijo = HermanoDerecho(hijo);
        }
    }
    return NumNiveles;
}

//Algoritmo para listar las etiquetas del i-ésimo nivel

void arbol::ListarEtiquetasEnUnNivel(int nivel, arbol *arbol){
    ListarEtiquetasEnUnNivelRec(nivel, arbol->Raiz(), arbol);
}

void arbol::ListarEtiquetasEnUnNivelRec(int nivel, NodoArbol *nodo, arbol *arbol){
    if (nivel == 1){
        cout<<nodo->Etiqueta();
    }
    else {
        NodoArbol *hijo = HijoMasIzquierdo(nodo);
        cout<<hijo->Etiqueta();
        while (hijo->Etiqueta() == 2){
            ListarEtiquetasEnUnNivelRec(nivel-1, hijo, arbol);

            hijo = HermanoDerecho(hijo);
        }
    }
}

//Algoritmo para listar las etiquetas del árbol por niveles
void arbol::ListarEtiquetasPorNivel(arbol *arbol){
    list<NodoArbol*> lista;
    lista.push_back(arbol->Raiz()); 
    while (lista.size()>0){
        NodoArbol *nodo = lista.front();
        lista.pop_front();
        cout<<arbol->Etiqueta(nodo);
        NodoArbol *nodoHijo = arbol->HijoMasIzquierdo(nodo);
        while (nodoHijo != nullptr){
            lista.push_back(nodoHijo);
            nodoHijo = arbol->HermanoDerecho(nodoHijo);
        }
    }
}

//Algoritmo para eliminar subarbol de un nodo
// void arbol:EliminarSubarbol(){
    
// }

//Algoritmo Listar nodos en preorden
void arbol::ListarEtiquetasRecursividad(NodoArbol *nodo, arbol *arbol)
{
    cout<<arbol->Etiqueta(nodo);
    NodoArbol *siguienteNodo = arbol->HijoMasIzquierdo(nodo);
    while (siguienteNodo != nullptr) 
    {
        ListarEtiquetasRecursividad(siguienteNodo, arbol);
        siguienteNodo = arbol->HermanoDerecho(siguienteNodo);
    } 
}

void arbol::ListarEtiquetasPreorden(arbol *arbol)
{
    NodoArbol *raiz = arbol->Raiz();
    cout<<arbol->Etiqueta(arbol->Raiz());
    ListarEtiquetasRecursividad(raiz, arbol);

}

//Algoritmo averiguar numero de niveles de arbol en preorden
int ultimoNivel = 0;
void arbol::NumNivelesRecursividad(NodoArbol *nodo, int nivel, arbol *arbol)
{
    NodoArbol *HMI = arbol->HijoMasIzquierdo(nodo);
    if ((HMI) == nullptr) 
    {
        if (nivel > ultimoNivel) 
        {
            ultimoNivel = nivel;
        }
    } else
    {   
        NodoArbol *N1 = arbol->HijoMasIzquierdo(nodo);
        while ((N1) != nullptr) 
        {
            NumNivelesRecursividad(N1, nivel+1, arbol);
            N1 = arbol->HermanoDerecho(N1);
        }
    }
}

int arbol::NumNivelesPreorden(arbol *arbol)
{
    ultimoNivel = 0;
    NumNivelesRecursividad(arbol->Raiz(), 1, arbol);
    return ultimoNivel;
}

//Algoritmo Buscar una etiqueta e (Devuelve el primer nodo encontrado con etiqueta e)

NodoArbol *nodoConEtiqueta = nullptr;
void arbol::BuscarEtiquetaRecursividad(int etiqueta, NodoArbol *nodo, arbol *arbol)
{
    if (arbol->Etiqueta(nodo) == etiqueta) 
    {
        nodoConEtiqueta = nodo;
    } else
    {
        NodoArbol *nodoTemp = arbol->HijoMasIzquierdo(nodo);
        while ((nodoTemp) != nullptr) 
        {
            BuscarEtiquetaRecursividad(etiqueta, nodoTemp, arbol);
            nodoTemp = arbol->HermanoDerecho(nodoTemp);
        }
    }
}

NodoArbol *arbol::BuscarEtiqueta (int etiqueta, arbol *arbol) 
{
    nodoConEtiqueta = nullptr;
    BuscarEtiquetaRecursividad(etiqueta, arbol->Raiz(), arbol);
    return nodoConEtiqueta;
}