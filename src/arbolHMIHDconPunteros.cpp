#include "arbolHMIHDconPunteros.h"

using namespace std;

void arbolHMIHDconPunteros::Iniciar()
{
    
}

void arbolHMIHDconPunteros::PonerRaiz(int etiqueta)
{
    this->raiz = new Nodo4(nullptr, nullptr, etiqueta);
}

Nodo4 *arbolHMIHDconPunteros::Raiz()
{
    return this->raiz;
}

Nodo4 *arbolHMIHDconPunteros::HijoMasIzquierdo(Nodo4 *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo4 *arbolHMIHDconPunteros::HermanoDerecho(Nodo4 *nodo)
{
    return nodo->HermanoDerecho();
}

Nodo4 *arbolHMIHDconPunteros::HermanoIzquierdo(Nodo4 *nodo)
{
    return nodo->HermanoIzquierdo();
}

void arbolHMIHDconPunteros::ModificarEtiqueta(Nodo4 *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int arbolHMIHDconPunteros::NumNodosRecursivo(Nodo4 *nodo)
{
    int cantidad = 1;
    Nodo4 *nodoTemp = nodo->HijoMasIzquierdo();
    while (nodoTemp != nullptr){
        cantidad+=this->NumNodosRecursivo(nodoTemp);
        *nodoTemp = *nodo->HermanoDerecho();
    }
    return cantidad;
    //recorrer arbol 
}

int arbolHMIHDconPunteros::NumNodos(){
    int cantidad = 0;
    if (this->Raiz() != nullptr){
        cantidad=this->NumNodosRecursivo(this->Raiz());
    }
    return cantidad;
}

Nodo4* arbolHMIHDconPunteros::AgregarHijo(Nodo4* nodo, int etiqueta)
{
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo4 *nuevoHijo = new Nodo4(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo4* antiguoHMI = nodo->HijoMasIzquierdo();
        Nodo4* nuevoHijo = new Nodo4(nullptr, antiguoHMI, etiqueta);
        nuevoHijo->SetearPadre(nodo);
        antiguoHMI->SetearHI(nuevoHijo);
        nodo->SetearHMI(nuevoHijo);
        return nuevoHijo;
    }
}

Nodo4* arbolHMIHDconPunteros::AgregarHijoMasDerecho(Nodo4* nodo, int etiqueta)
{
    if(nodo->HijoMasIzquierdo() == nullptr) 
    {
        Nodo4 *nuevoHijo = new Nodo4(nullptr, nullptr, etiqueta);
        nodo->SetearHMI(nuevoHijo);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    } else 
    {
        Nodo4 *hijoActual = nodo->HijoMasIzquierdo();
        while((hijoActual->HermanoDerecho()) != nullptr)
        {
            hijoActual = hijoActual->HermanoDerecho();
        }
        Nodo4 *nuevoHijo = new Nodo4(nullptr, nullptr, etiqueta);
        hijoActual->SetearHD(nuevoHijo);
        nuevoHijo->SetearHI(hijoActual);
        nuevoHijo->SetearPadre(nodo);
        return nuevoHijo;
    }
}

Nodo4* arbolHMIHDconPunteros::Padre(Nodo4 *nodo)
{
    return nodo->Padre();  
}

