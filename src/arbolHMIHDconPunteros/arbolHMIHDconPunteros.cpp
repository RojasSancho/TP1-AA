#include "arbolHMIHDconPunteros.h"

using namespace std;

void arbolHMIHDConPunteros::Iniciar()
{
    
}

void arbolHMIHDConPunteros::PonerRaiz(int etiqueta)
{
    this->raiz = new Nodo(nullptr, nullptr, etiqueta);
}

Nodo *arbolHMIHDConPunteros::Raiz()
{
    return this->raiz;
}

Nodo *arbolHMIHDConPunteros::HijoMasIzquierdo(Nodo *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo *arbolHMIHDConPunteros::HermanoDerecho(Nodo *nodo)
{
    return nodo->HermanoDerecho();
}

Nodo *arbolHMIHDConPunteros::HermanoIzquierdo(Nodo *nodo)
{
    return nodo->HermanoIzquierdo();
}

int arbolHMIHDConPunteros::Etiqueta(Nodo *nodo)
{
    return nodo->Etiqueta();
}

void arbolHMIHDConPunteros::ModificarEtiqueta(Nodo *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolHMIHDUltimoApuntandoPadre::NumNodosRecursivo(Nodo *nodo)
{
    int cantidad = 1;
    Nodo *nodoTemp = *nodo->HijoMasIzquierdo();
    while (nodoTemp != nullptr){
        cantidad+=this->NumNodosRecursivo();
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

Nodo* arbolHMIHDConPunteros::AgregarHijo(Nodo* nodo, int etiqueta)
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
        nuevoHijo->SetearPadre(nodo);
        antiguoHMI->SetearHI(nuevoHijo);
        nodo->SetearHMI(nuevoHijo);
        return nuevoHijo;
    }
}

Nodo* arbolHMIHDConPunteros::AgregarHijoMasDerecho(Nodo* nodo, int etiqueta)
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
        nuevoHijo->SetearHI(hijoActual);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    }
}

Nodo* arbolHMIHDConPunteros::Padre(Nodo *nodo)
{
    return nodo->Padre();  
}

