#include "arbol2.h"
#include "listaIndexada.h"
#include "nodo2.h"

using namespace std;

/**
 * @brief Construye nuevo Arbol 5:: Arbol 5 object
 * 
 */
Arbol2::Arbol2(){
	lista = new ListaIndexada();
}

/**
 * @brief Destruye Arbol 5:: Arbol 5 object
 * 
 */
Arbol2::~Arbol2(){

}

/**
 * @brief Hace y posiciona un nodo con int como etiqueta
 * @param etiqueta etiqueta tipo entero del nodo a poner
 */
void Arbol2::PonerRaíz(int etiqueta){
	lista->Insertar(0, etiqueta);
}

/**
 * @brief Agrega Hijo a un nodo en el árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol2::AgregarHijo(Nodo2 *nodo, int etiqueta){
	lista->agregarAlFinal(etiqueta);
	Nodo2 *nodoHijo = new Nodo2(etiqueta);
	nodo->agregarElem(nodoHijo);
}

/**
 * @brief Agrega hijo a un nodo del árbol como su hijo "más a la derecha"
 * 
 * @param nodo 
 * @param etiqueta
 */
void Arbol2::AgregarHijoMásDerecho(Nodo2 nodo, int etiqueta){
	lista->agregarAlFinal(etiqueta);
	Nodo2 *nodoHijo = new Nodo2(etiqueta);
	nodo.agregarElem(nodoHijo);
}
/**
 * @brief Borra un nodo hoja del árbol
 * 
 * @param nodo 
 */
void Arbol2::BorrarHoja(Nodo2 nodo){

}

/**
 * @brief Devuelve nodo raíz del árbol
 * @return Nodo
 */
Nodo2 *Arbol2::Raíz(){
	return lista->Recuperar(0);
}

/**
 * @brief Devuelve nodo padre de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo2 
 */
Nodo2 Arbol2::Padre(Nodo2 nodo){
	
}

/**
 * @brief Devuelve nodo hijo más izquierdo de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo2 
 */
Nodo2 Arbol2::HijoMásIzquierdo(Nodo2 nodo){

}

/**
 * @brief Devuelve el nodo hermano que se encuentra "a la derecha" de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo2 
 */
Nodo2 Arbol2::HermanoDerecho(Nodo2 nodo){

}

/**
 * @brief Retorna etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @return int 
 */
int Arbol2::Etiqueta(Nodo2 nodo){

}

/**
 * @brief Modifica etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol2::ModificaEtiqueta(Nodo2 nodo, int etiqueta){

}

/**
 * @brief Retorna cantidad de nodos existentes en el árbol
 * 
 * @return int 
 */
int Arbol2::NumNodos(){

}

