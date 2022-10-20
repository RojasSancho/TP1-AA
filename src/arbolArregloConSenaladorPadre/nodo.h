#ifndef NODO_H
#define NODO_H

using namespace std;

class Nodo
{
    Nodo *padre;

    int posicion;
    int etiqueta;
    int senaladorPadre;

    public:

    Nodo();
    Nodo(Nodo *nodo, int etiqueta);
    void ModificarEtiqueta(int etiqueta);
    int Etiqueta();
    Nodo* Padre();

    void SetearPadre(Nodo* padre);  

}

#endif