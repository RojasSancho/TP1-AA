#ifndef NODO5_H
#define NODO5_H

using namespace std;

class Nodo5
{
    Nodo5 *hijoMasIzquierdo;
    Nodo5 *hermanoDerecho;
    Nodo5 *padre;

    int etiqueta;

    public:

    Nodo5();
    Nodo5(Nodo5 *hijoMasIzquierdo, Nodo5 *hermanoDerecho, int etiqueta);
    Nodo5(int etiqueta);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    Nodo5* HijoMasIzquierdo();
    Nodo5* HermanoDerecho();
    Nodo5* Padre();

    void SetearHMI(Nodo5* HMI); //Modificar Hijo Mas Izquierdo
    void SetearHD(Nodo5* HD); //Modificar HermanoDerecho
    void SetearPadre(Nodo5* padre);  
    void SetearHI(Nodo5* HI);

};

#endif