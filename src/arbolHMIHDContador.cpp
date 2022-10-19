#include "arbolHMIHDContador.h"

using namespace std;

void ArbolHMIHDContador::Iniciar()
{
    this->contador = 0;
}

void ArbolHMIHDContador::PonerRaiz(int etiqueta)
{
    this->raiz = new Nodo(nullptr, nullptr, etiqueta);
    this->contador = 1;
}

Nodo *ArbolHMIHDContador::Raiz()
{
    return this->raiz;
}

Nodo *ArbolHMIHDContador::HijoMasIzquierdo(Nodo *nodo)
{
    return nodo->HijoMasIzquierdo();
}

Nodo *ArbolHMIHDContador::HermanoDerecho(Nodo *nodo)
{
    return nodo->HermanoDerecho();
}

int ArbolHMIHDContador::Etiqueta(Nodo *nodo)
{
    return nodo->Etiqueta();
}

void ArbolHMIHDContador::ModificarEtiqueta(Nodo *nodo, int etiqueta)
{
    nodo->ModificarEtiqueta(etiqueta);
}

int ArbolHMIHDContador::NumNodos()
{
    return this->contador;
}

Nodo *ArbolHMIHDContador::AgregarHijo(Nodo *nodo, int etiqueta)
{
    if (nodo->HijoMasIzquierdo() == nullptr)
    {
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        nodo->ModificarHMI(nuevoHijo);
        this->contador++;
        return nuevoHijo;
    }
    else
    {
        Nodo *antiguoHMI = nodo->HijoMasIzquierdo();
        Nodo *nuevoHijo = new Nodo(nullptr, antiguoHMI, etiqueta);
        nodo->ModificarHMI(nuevoHijo);
        this->contador++;
        return nuevoHijo;
    }
}

Nodo *ArbolHMIHDContador::AgregarHijoMasDerecho(Nodo *nodo, int etiqueta)
{
    if (nodo->HijoMasIzquierdo() == nullptr)
    {
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        nodo->ModificarHMI(nuevoHijo);
        this->contador++;
        return nuevoHijo;
    }
    else
    {
        Nodo *hijoActual = nodo->HijoMasIzquierdo();
        while ((hijoActual->HermanoDerecho()) != nullptr)
        {
            hijoActual = hijoActual->HermanoDerecho();
        }
        Nodo *nuevoHijo = new Nodo(nullptr, nullptr, etiqueta);
        hijoActual->ModificarHD(nuevoHijo);
        this->contador++;
        return nuevoHijo;
    }
}

// Nodo* ArbolHMIHDContador::Padre(Nodo *nodo)
//{
//     PadreRecursivo(nodo, raiz);
// }

// Nodo *ArbolHMIHDContador::PadreRecursivo(Nodo *nodo, Nodo *inicio)
// {

//     Nodo *padre2;
//     Nodo *nh = nullptr;
//     Nodo *padre;
//     Nodo *padreFinal;
//     if (nh == nodo)
//     {
//         Nodo *padreFinal = padre;
//         return padreFinal;
//     }

//     if (nodo == this->raiz)
//     {
//         return nullptr;
//     }

//     padre = inicio;
//     nh = inicio->HijoMasIzquierdo();

//     if (nh == nodo)
//     {
//         Nodo *padreFinal = padre;
//         return padreFinal;
//     }

//     while (nh != nullptr)
//     {
//         Nodo *padre2 = PadreRecursivo(nodo, nh);
//         nh = nh->HermanoDerecho();
//     }
//     return padre2;
// }