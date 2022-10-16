#ifndef COLAARREGLOCIRCULAR_H
#define COLAARREGLOCIRCULAR_H

#include <vector>
#include <iostream>

using namespace std;

class ColaArregloCircular 
{
    int frente;
    int final;
    int contadorElementos;
    int M; //Tamaño maximo de la cola

    
    
    public:
    vector<int> numeros;
    //ColaArregloCircular();

    void Iniciar(int M);
    void Encolar(int elemento);
    int Desencolar();
    int NumElem();
};

#endif


