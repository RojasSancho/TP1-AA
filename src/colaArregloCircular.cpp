#include "colaArregloCircular.h"

using namespace std;

void ColaArregloCircular::Iniciar(int M)
{
    this->frente = 0;
    this->final = -1;
    this->contadorElementos = 0;
    this->M = M;
    this->numeros.resize(M);
}

void ColaArregloCircular::Encolar(int elemento)
{
    if(contadorElementos == M){
        return;
    } else if (final == (M-1)) {
        final = 0;   
    } else {
        final = final+1;
    } 
    numeros[final] = elemento;
    contadorElementos++;
}

int ColaArregloCircular::Desencolar()
{
    int desencolado = numeros[frente];
    contadorElementos--;
    numeros[frente] = 0;
    
    if(frente == (M-1)){
        frente = 0;
    } else {
        frente = frente + 1;
    }
      
    return desencolado;
}

int ColaArregloCircular::NumElem()
{
    return contadorElementos;
}