#include "arbol5.h"

using namespace std;

/**
 * @brief Construye nuevo Arbol 5:: Arbol 5 object
 * 
 */
Arbol5::Arbol5(){

}

/**
 * @brief Destruye Arbol 5:: Arbol 5 object
 * 
 */
Arbol5::~Arbol5(){

}

/**
 * @brief Hace y posiciona un nodo con int como etiqueta
 * @param etiqueta etiqueta tipo entero del nodo a poner
 */
void Arbol5::PonerRaíz(int etiqueta){
    this->raiz = new Nodo5(nullptr, nullptr, etiqueta);
}

/**
 * @brief Agrega Hijo a un nodo en el árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol5::AgregarHijo(Nodo5* nodo, int etiqueta){
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo5 *nuevoHijo = new Nodo5(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        //return nuevoHijo;
    } else 
    {
        Nodo5* antiguoHMI = nodo->HijoMasIzquierdo();
        Nodo5* nuevoHijo = new Nodo5(nullptr, antiguoHMI, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        //return nuevoHijo;
    }
}

/**
 * @brief Agrega hijo a un nodo del árbol como su hijo "más a la derecha"
 * 
 * @param nodo 
 * @param etiqueta
 */
void Arbol5::AgregarHijoMásDerecho(Nodo5 nodo, int etiqueta){
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo5 *nuevoHijo = new Nodo5(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo5 *hijoActual = nodo->HijoMasIzquierdo();
        while((hijoActual->HermanoDerecho()) != nullptr)
        {
            hijoActual = hijoActual->HermanoDerecho();
        }
        Nodo5 *nuevoHijo = new Nodo5(nullptr, nullptr, etiqueta);
        hijoActual->SetearHD(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    }
}
/**
 * @brief Borra un nodo hoja del árbol
 * 
 * @param nodo 
 */
void Arbol5::BorrarHoja(Nodo5 nodo){

}

/**
 * @brief Devuelve nodo raíz del árbol
 * @return Nodo
 */
Nodo5 Arbol5::Raíz(){
    return this->raiz;
}

/**
 * @brief Devuelve nodo padre de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo5 
 */
Nodo5 Arbol5::Padre(Nodo5 nodo){
    Nodo5 *padre;
    if (nodo->HermanoDerecho() == nullptr){
        padre = nodo->Padre();
    }
    else {
        Nodo5 *nodoTemp = nodo->HermanoDerecho();
        while (HermanoDerecho(nodoTemp) != nullptr){
            nodoTemp = nodo->HermanoDerecho();
        }
        padre = Padre(nodoTemp);
    }
    //ir al hermano más derecho para conseguir padre
    return padre;
}

/**
 * @brief Devuelve nodo hijo más izquierdo de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo5 
 */
Nodo5 Arbol5::HijoMásIzquierdo(Nodo5 nodo){
    return (nodo->HijoMasIzquierdo());
}

/**
 * @brief Devuelve el nodo hermano que se encuentra "a la derecha" de un nodo del árbol
 * 
 * @param nodo 
 * @return Nodo5 
 */
Nodo5 Arbol5::HermanoDerecho(Nodo5 nodo){
    return (nodo->HermanoDerecho());
}

/**
 * @brief Retorna etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @return int 
 */
int Arbol5::Etiqueta(Nodo5 *nodo){
    return (nodo->get());
}

/**
 * @brief Modifica etiqueta de un nodo del árbol
 * 
 * @param nodo 
 * @param etiqueta 
 */
void Arbol5::ModificaEtiqueta(Nodo5 nodo, int etiqueta){
    nodo->ModificarEtiqueta(etiqueta);
}

/**
 * @brief Retorna cantidad de nodos existentes en el árbol
 * 
 * @return int 
 */
int Arbol5::NumNodos(){
    int cantidad = 0;
    if (this->Raiz() != nullptr){
        cantidad=this->NumNodosRecursivo(this->Raiz());
    }
    return cantidad;
}


/**
 * @brief BuscarEtiqueta busca el primer nodo con 
 * 
 */
// Nodo5 *nodoEtiqueta2 = nullptr;
// Nodo5 *arbolHMIHDUltimoApuntandoPadre::BuscarEtiqueta (int etiqueta) 
// {
//     nodoEtiqueta2 = nullptr;
//     BuscarEtiquetaRecursividad(etiqueta, this->Raiz());
//     return nodoEtiqueta2;
// }


// void arbolHMIHDUltimoApuntandoPadre::BuscarEtiquetaRecursividad(int etiqueta, Nodo5 *nodo)
// {
//     if (this->Etiqueta(nodo) == etiqueta) 
//     {
//         nodoEtiqueta2 = nodo;
//     } else
//     {
//         Nodo5 *nodoTemp = this->HijoMasIzquierdo(nodo);
//         while ((nodoTemp) != nullptr) 
//         {
//             BuscarEtiquetaRecursividad(etiqueta, nodoTemp);
//             nodoTemp = this->HermanoDerecho(nodoTemp);
//         }
//     }
// }
