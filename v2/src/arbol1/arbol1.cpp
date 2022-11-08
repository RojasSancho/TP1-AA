#include "arbol1.h"

using namespace std;

/**
 * @brief Construye nuevo Arbol:: Arbol 5 object
 * 
 */
Arbol1::Arbol1(){
    arreglo = new Nodo1[124];
    ultimo =124;
    actual = 0;
    numElem = 0;
}

/**
 * @brief Construye nuevo Arbol 5:: Arbol 5 object
 * 
 */
Arbol1::Arbol1(int cantidad){
    arreglo = new Nodo1[cantidad];
    ultimo = cantidad;
    actual = 0;
    numElem = 0;
}

/**
 * @brief Destruye Arbol 5:: Arbol 5 object
 * 
 */
Arbol1::~Arbol1(){

}

/**
 * @brief Hace y posiciona un nodo con int como etiqueta
 * @param etiqueta etiqueta tipo entero del nodo a poner
 */
void Arbol1::PonerRaíz(int etiqueta){
    arreglo[0].setIndice(0);
    arreglo[0].setValor(etiqueta);
    numElem+=1;
}

/**
 * @brief Agrega Hijo a un nodo en el árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol1::AgregarHijo(Nodo1 nodo, int etiqueta){
    if (numElem < ultimo){
        arreglo[NumElem].setIndice(NumElem);
        arreglo[NumElem].setValor(etiqueta);
        arreglo[NumElem].setPadre(nodo.getIndice());
    }
}

/**
 * @brief Agrega hijo a un nodo del árbol como su hijo "más a la derecha"
 * 
 * @param nodo 
 * @param etiqueta
 */
void Arbol1::AgregarHijoMásDerecho(Nodo1 nodo, int etiqueta){
    if (numElem < ultimo){
        arreglo[NumElem].setIndice(NumElem);
        arreglo[NumElem].setValor(etiqueta);
        arreglo[NumElem].setPadre(nodo.getIndice());
    }
}
/**
 * @brief Borra un nodo hoja del árbol
 * 
 * @param nodo 
 */
void Arbol1::BorrarHoja(Nodo1 nodo){

}

/**
 * @brief Devuelve nodo raíz del árbol
 * @return Nodo
 */
Nodo1 Arbol1::Raíz(){
    return arreglo[0];
}

/**
 * @brief Devuelve nodo padre de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo1 
 */
Nodo1 Arbol1::Padre(Nodo1 nodo){
    int posPadre = nodo.getPadre();
    return arreglo[posPadre];
}

/**
 * @brief Devuelve nodo hijo más izquierdo de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo1 
 */
Nodo1 Arbol1::HijoMásIzquierdo(Nodo1 nodo){

}

/**
 * @brief Devuelve el nodo hermano que se encuentra "a la derecha" de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo1 
 */
Nodo1 Arbol1::HermanoDerecho(Nodo1 nodo){

}

/**
 * @brief Retorna etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @return int 
 */
int Arbol1::Etiqueta(Nodo1 nodo){

}

/**
 * @brief Modifica etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol1::ModificaEtiqueta(Nodo1 nodo, int etiqueta){

}

/**
 * @brief Retorna cantidad de nodos existentes en el árbol
 * 
 * @return int 
 */
int Arbol1::NumNodos(){

}