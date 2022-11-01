#include "arbolHMIHDUltimoApuntandoPadre.h"

using namespace std;

void arbolHMIHDUltimoApuntandoPadre::Iniciar()
{
    this->raiz = nullptr;
}
void arbolHMIHDUltimoApuntandoPadre::PonerRaiz(int etiqueta)
{
    this->raiz = new Nodo5(nullptr, nullptr, etiqueta);
}

Nodo5 *arbolHMIHDUltimoApuntandoPadre::Raiz()
{
    return this->raiz;
}

Nodo5 *arbolHMIHDUltimoApuntandoPadre::Padre(Nodo5 *nodo){
    Nodo5 *padre;
    if (nodo->HermanoDerecho() == nullptr){
        padre = nodo->Padre();
    }
    else {
        Nodo5 *nodoTemp = HermanoDerecho(nodo);
        while (HermanoDerecho(nodoTemp) != nullptr){
            nodoTemp = HermanoDerecho(nodo);
        }
        padre = Padre(nodoTemp);
    }
    //ir al hermano más derecho para conseguir padre
    return padre;
}

Nodo5 *arbolHMIHDUltimoApuntandoPadre::HijoMasIzquierdo(Nodo5 *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo5 *arbolHMIHDUltimoApuntandoPadre::HermanoDerecho(Nodo5 *nodo)
{
    return nodo->HermanoDerecho();
}

void arbolHMIHDUltimoApuntandoPadre::ModificarEtiqueta(Nodo5 *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolHMIHDUltimoApuntandoPadre::NumNodosRecursivo(Nodo5 *nodo)
{
    int cantidad = 1;
    Nodo5 *nodoTemp = nodo->HijoMasIzquierdo();
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

Nodo5* arbolHMIHDUltimoApuntandoPadre::AgregarHijo(Nodo5* nodo, int etiqueta)
{
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo5 *nuevoHijo = new Nodo5(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo5* antiguoHMI = nodo->HijoMasIzquierdo();
        Nodo5* nuevoHijo = new Nodo5(nullptr, antiguoHMI, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        return nuevoHijo;
    }
}

Nodo5* arbolHMIHDUltimoApuntandoPadre::AgregarHijoMasDerecho(Nodo5* nodo, int etiqueta)
{
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


