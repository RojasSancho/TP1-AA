#ifndef NODO_H
#define NODO_H

using namespace std;

class Nodo
{
    Nodo *hijoMasIzquierdo;
    Nodo *hermanoDerecho;

    int etiqueta;

    public:

    Nodo();
    Nodo(Nodo *hijoMasIzquierdo, Nodo *hermanoDerecho, int etiqueta);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    Nodo* HijoMasIzquierdo();
    Nodo* HermanoDerecho();
};  

#endif