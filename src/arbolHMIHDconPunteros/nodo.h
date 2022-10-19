#ifndef NODO_H
#define NODO_H

using namespace std;

class Nodo
{
    Nodo *hijoMasIzquierdo;
    Nodo *hermanoDerecho;
    Nodo *hermanoIzquierdo;
    Nodo *padre;

    int etiqueta;

    public:

    Nodo();
    Nodo(Nodo *hijoMasIzquierdo, Nodo *hermanoDerecho, int etiqueta);
    Nodo(int etiqueta);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    Nodo* HijoMasIzquierdo();
    Nodo* HermanoDerecho();
    Nodo* HermanoIzquierdo();
    Nodo* Padre();

    void SetearHMI(Nodo* HMI); //Modificar Hijo Mas Izquierdo
    void SetearHD(Nodo* HD); //Modificar HermanoDerecho
    void SetearPadre(Nodo* padre);  
    void SetearHI(Nodo* HI);

};

#endif