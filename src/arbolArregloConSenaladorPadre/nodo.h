#ifndef NODO_H
#define NODO_H

using namespace std;

class Nodo
{
    Nodo *padre;

    int posicion;
    int etiqueta;
    int padre;

    public:

    Nodo();
    Nodo(Nodo *nodo, int etiqueta, int posicion);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    int Posicion();
    int Padre();

    void SetearPadre(Nodo* padre);  

}

#endif