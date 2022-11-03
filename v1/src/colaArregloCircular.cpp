#include "colaArregloCircular.h"

using namespace std;
/*
INICIAR (M=Numero maximo de elementos)

Efecto: Inicializa una cola y la deja sin elementos, 
esta puede ser utilizada desde ese momento.
Requiere: Que la cola no este inicializada.
Modifica: Cola.
*/
void ColaArregloCircular::Iniciar(int M)
{
    this->frente = 0;
    this->final = -1;
    this->contadorElementos = 0;
    this->M = M;
    this->numeros.resize(M);
}


/*
ENCOLAR (elemento a encolar)

Efecto: Introduce un nuevo elemento (entero) 
en el extremo final de la cola.
Requiere: Que la cola este inicializada y el elemento sea un entero.
Modifica: Cola.
*/
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

/*
DESENCOLAR 

Efecto: Retira el elemento (entero) que se encuentra en el extremo del
frente de la cola. Ademas retorna el elemento desencolado.
Requiere: Que la cola este inicializada y no vacia.
Modifica: Cola.
*/
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

/*
NumElem

Efecto: Retorna el numero total de elementos que se encuentran
en la cola (entero).
Requiere: Que la cola este inicializada.
Modifica: No Aplica.
*/
int ColaArregloCircular::NumElem()
{
    return contadorElementos;
}