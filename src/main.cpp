#include "colaArregloCircular.h"
#include "arbolHMIHDContador.h"
#include "listaIndexada.h"
//#include "arbolHMIHDConPunteros.h"
#include "arbolHMIHDUltimoApuntandoPadre.h"
#include <iostream>

using namespace std;

int main()
{
    bool terminar = false;

    while(!terminar)
    {
        int opcionMenuPrin = 0;

        cout<< "\n\nBienvenido! Este programa esta hecho para probar diferentes modelos matematicos como lo son la Cola, la Lista Indexada y el Arbol n-ario.\n"; 
        cout<<"Elija entre las siguiente opciones digitando uno de los numeros:\n";
        cout<<"\n1. Cola\n";
        cout<<"2. Lista Indexada\n";
        cout<<"3. Arbol n-ario\n";
        cout<<"\n4. Salir del programa\n";
        cin>>opcionMenuPrin;

        if(opcionMenuPrin == 4)
        {
            cout<<"\nHasta pronto!\n";
            terminar = true;
        }

        switch (opcionMenuPrin)
        {
            
        case 1: //Modelo Cola
        {
            bool salirAMenuPrin = false;
            ColaArregloCircular *colaUsuario = new ColaArregloCircular();
            while(!salirAMenuPrin) 
            {
                int opcionCola = 0;
                cout<<"\n\nCOLA\nDigite alguna de las opciones para utilizar el operador basico o 6 para volver al menu principal:\n\n";
                cout<<"1. Iniciar\n";
                cout<<"2. Destruir\n";
                cout<<"3. Encolar\n";
                cout<<"4. Desencolar\n";
                cout<<"5. NumElem (Numero de elementos en la cola)\n";
                cout<<"\n6. Salir al menu principal\n";
                cin>>opcionCola;

                if(opcionCola == 6)
                {
                    salirAMenuPrin = true;
                    delete colaUsuario;
                }

                switch (opcionCola)
                {
                case 1:
                {
                    int M = 0;
                    cout<<"\nIngrese el numero maximo de elementos (M) podra tener la cola:";
                    cin>>M;
                    colaUsuario->Iniciar(M);
                    cout<<"\nCola iniciada!";
                    break;
                }
                case 2:
                {    
                    delete colaUsuario;
                    break;
                }
                case 3:
                {    
                    int nuevoEncolado = 0;
                    cout<<"\nDigite el entero que desea encolar:";
                    cin>>nuevoEncolado;
                    colaUsuario->Encolar(nuevoEncolado);
                    cout<<"\nEntero encolado";
                    break;
                }    
                case 4:
                {    
                    int desencolado = colaUsuario->Desencolar();
                    cout<<"\nEl entero que se acaba de desencolar es: " << desencolado;

                    break;
                }     
                case 5:
                {  
                    int numElem = colaUsuario->NumElem();  
                    cout<<"\nEl numero actual de elementos de la cola es: " << numElem;
                    break;
                }        
                default:
                    break;
                }
            }
            break;
        }
        case 2: //Modelo Lista

            break;

        case 3: //Modelo Arbol n-ario
            break; 

        default:
            break;
        }

    }  
}