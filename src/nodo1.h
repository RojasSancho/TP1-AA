#ifndef NODO1_H
#define NODO1_H

using namespace std;

class Nodo1
{

    int posicion;
    int etiqueta;
    int padre;

    public:

    Nodo1();
    Nodo1(int padre, int etiqueta, int posicion);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    int Posicion();
    int Padre();

};

#endif