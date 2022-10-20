#ifndef NODO4_H
#define NODO4_H

using namespace std;

class Nodo4
{
    Nodo4 *hijoMasIzquierdo;
    Nodo4 *hermanoDerecho;
    Nodo4 *hermanoIzquierdo;
    Nodo4 *padre;

    int etiqueta;

    public:

    Nodo4();
    Nodo4(Nodo4 *hijoMasIzquierdo, Nodo4 *hermanoDerecho, int etiqueta);
    Nodo4(int etiqueta);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    Nodo4* HijoMasIzquierdo();
    Nodo4* HermanoDerecho();
    Nodo4* HermanoIzquierdo();
    Nodo4* Padre();

    void SetearHMI(Nodo4* HMI); //Modificar Hijo Mas Izquierdo
    void SetearHD(Nodo4* HD); //Modificar HermanoDerecho
    void SetearPadre(Nodo4* padre);  
    void SetearHI(Nodo4* HI);

};

#endif