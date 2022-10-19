#include "arbolHMIHDUltimoApuntandoPadre.h"

using namespace std;

void arbolHMIHDUltimoApuntandoPadre::Iniciar()
{
    
}

void arbolHMIHDUltimoApuntandoPadre::PonerRaiz(int etiqueta)
{
    this->raiz = new Nodo(nullptr, nullptr, etiqueta);
}

Nodo *arbolHMIHDUltimoApuntandoPadre::Raiz()
{
    return this->raiz;
}

Nodo *arbolHMIHDUltimoApuntandoPadre::Padre(Nodo *nodo){
    Nodo *padre;
    if (nodo->HermanoDerecho() == nullptr){
        padre = nodo->Padre();
    }
    else {
        Nodo *nodoTemp = HermanoDerecho(nodo);
        while (HermanoDerecho(nodoTemp) != nullptr){
            nodoTemp = HermanoDerecho(nodo);
        }
        padre = Padre(nodoTemp);
    }
    //ir al hermano más derecho para conseguir padre
    return padre;
}

Nodo *arbolHMIHDUltimoApuntandoPadre::HijoMasIzquierdo(Nodo *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo *arbolHMIHDUltimoApuntandoPadre::HermanoDerecho(Nodo *nodo)
{
    return nodo->HermanoDerecho();
}

int arbolHMIHDUltimoApuntandoPadre::Etiqueta(Nodo *nodo)
{
    return nodo->Etiqueta();
}

void arbolHMIHDUltimoApuntandoPadre::ModificarEtiqueta(Nodo *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolHMIHDUltimoApuntandoPadre::NumNodosRecursivo(Nodo *nodo)
{
    int cantidad = 1;
    Nodo *nodoTemp = nodo->HijoMasIzquierdo();
    while (nodoTemp != nullptr){
        cantidad+=this->NumNodosRecursivo(nodoTemp);
        *nodoTemp = *nodo->HermanoDerecho();
    }
    return cantidad;
    //recorrer arbol 
}

int arbolHMIHDUltimoApuntandoPadre::NumNodos(){
    int cantidad = 0;
    if (this->Raiz() != nullptr){
        cantidad=this->NumNodosRecursivo(this->Raiz());
    }
    return cantidad;
}

Nodo* arbolHMIHDUltimoApuntandoPadre::AgregarHijo(Nodo* nodo, int etiqueta)
{
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo* antiguoHMI = nodo->HijoMasIzquierdo();
        Nodo* nuevoHijo = new Nodo(nullptr, antiguoHMI, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        return nuevoHijo;
    }
}

Nodo* arbolHMIHDUltimoApuntandoPadre::AgregarHijoMasDerecho(Nodo* nodo, int etiqueta)
{
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo *hijoActual = nodo->HijoMasIzquierdo();
        while((hijoActual->HermanoDerecho()) != nullptr)
        {
            hijoActual = hijoActual->HermanoDerecho();
        }
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        hijoActual->SetearHD(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    }
}


