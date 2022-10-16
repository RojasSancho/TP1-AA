#include "colaArregloCircular.h"

using namespace std;

void ColaArregloCircular::Iniciar(int M)
{
    this->frente = 2;
    this->final = 1;
    this->contadorElementos = 0;
    this->M = M;
    this->numeros.resize(M);
}

void ColaArregloCircular::Encolar(int elemento)
{
    if(contadorElementos == M){
        return;
    } else if (final == (M-1)) {
        final == 0;  
    } else {
        final == final+1;
    } 
    numeros.insert(numeros.begin() + final, elemento);
    contadorElementos++;
}

int ColaArregloCircular::Desencolar()
{
    int desencolado = numeros[frente];
    numeros.erase(numeros.begin() + frente);
    
    if(frente == (M-1)){
        frente == 0;
    } else {
        frente == frente + 1;
    }
      
    return desencolado;
}
