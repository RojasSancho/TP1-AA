/*
Integrantes:

Rojas Sancho Hermes Josue C16882
Alfaro Mayorga Andrés Mauricio C10210
Sánchez Cárdenas Carlos David C17235
*/

#include "colaArregloCircular.h"
#include "listaIndexada.h"

#include "arbol.h"
#include "arbolHMIHDContador.h"
#include "arbolHMIHDconPunteros.h"
#include "arbolArregloConSenaladorPadre.h"
#include "arbolHMIHDUltimoApuntandoPadre.h"

#include "nodo.h"
#include "nodo1.h"
#include "nodo4.h"
#include "nodo5.h"
#include "nodoLista.h"
#include "nodoArbol.h"

#include "./algoritmosArbol/algoritmosEtapa3.cpp"

#include <iostream>

using namespace std;

int main()
{
    bool terminar = false;

    while(!terminar)
    {
        system("clear");
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
                system("clear");
                int opcionCola = 0;
                cout<<"\n\nCOLA\nDigite alguna de las opciones para utilizar el operador basico o 6 para volver al menu principal:\n\n";
                cout<<"1. Iniciar\n";
                cout<<"2. Destruir\n";
                cout<<"3. Encolar\n";
                cout<<"4. Desencolar\n";
                cout<<"5. NumElem (Numero actual de elementos en la cola)\n";
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
                    cout<<"\nCola destruida!";
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
        case 2: //Modelo Lista (Los indices comienzan en 0)
        {
            bool salirAMenuPrin = false;
            ListaIndexada *listaUsuario = new ListaIndexada();
            while(!salirAMenuPrin)
            {
                system("clear");
                int opcionLista = 0;
                cout<<"\n\nLISTA INDEXADA\nDigite alguna de las opciones para utilizar el operador basico o 9 para volver al menu principal:\n\n";
                cout<<"1. Iniciar\n";
                cout<<"2. Destruir\n";
                cout<<"3. AgregarAlFinal\n";
                cout<<"4. Insertar\n";
                cout<<"5. Borrar\n";
                cout<<"6. Recuperar\n";
                cout<<"7. Modificar\n";
                cout<<"8. NumElem (Numero actual de elementos en la lista)\n";
                cout<<"\n9. Salir al menu principal\n";
                cin>>opcionLista;

                if(opcionLista == 9)
                {
                    salirAMenuPrin = true;
                    delete listaUsuario;
                }

                switch (opcionLista)
                {
                case 1:
                {
                    ListaIndexada *listaUsuario = new ListaIndexada();
                    cout<<"\nLista iniciada!";
                    break;
                }
                case 2:
                {    
                    listaUsuario->~ListaIndexada();
                    delete listaUsuario;
                    cout<<"\nLista destruida!";
                    break;
                }
                case 3:
                {    
                    int elemento = 0;
                    cout<<"\nIngrese el elemento entero a insertar: ";
                    cin>>elemento;
                    listaUsuario->agregarAlFinal(elemento);

                    cout<<"\nElemento insertado";
                    break;
                }    
                case 4:
                {    
                    int elemento = 0;
                    int indice = 0;
                    cout<<"\nIngrese el elemento entero a insertar: ";
                    cin>>elemento;
                    cout<<"\nIngrese el indice donde se insertara: ";
                    cin>>indice;
                    listaUsuario->Insertar(indice, elemento);

                    cout<<"\nElemento insertado";
                    break;
                }     
                case 5:
                {  
                    int indice = 0;
                    cout<<"\nIngrese el indice donde se encuentra el elemento que desea borrar: ";
                    cin>>indice;
                    listaUsuario->Borrar(indice);

                    cout<<"\nElemento del indice "<<indice<<" borrado";
                    break;
                } 
                case 6:
                {
                    int indice = 0;
                    cout<<"Ingrese el indice en el que se encuentra el elemento que desea recuperar: ";
                    cin>>indice;
                    NodoLista *nodoRecuperado = listaUsuario->Recuperar(indice);
                    int elementoRecuperado = nodoRecuperado->getElemento();

                    cout<<"\nEl elemento recuperado es: " << elementoRecuperado;
                    break;
                }       
                case 7:
                {
                    int indice = 0;
                    int elementoParaModificar = 0;
                    cout<<"Ingrese el entero con el que se va a modificar: ";
                    cin>>elementoParaModificar;
                    cout<<"Ingrese el indice que se va a modificar: ";
                    cin>>indice;
                    listaUsuario->Modificar(indice, elementoParaModificar);

                    cout<<"Indice "<<indice<<" modificado";
                    break;
                } 
                case 8:
                {
                    int numElem = listaUsuario->NumElem();
                    cout<<"El numero actual de elementos en la lista es: "<<numElem;
                    break;
                } 
                default:
                    break;
                }
            }
            break;
        }
        case 3: //Modelo Arbol n-ario
        { 

            bool salirAMenuPrin = false;
            //arbolArregloConSenaladorPadre *arbolUsuario = new arbolArregloConSenaladorPadre();
            arbolHMIHDContador *arbolUsuario = new arbolHMIHDContador();
            //arbolHMIHDconPunteros *arbolUsuario = new arbolHMIHDconPunteros();
            //arbolHMIHDUltimoApuntandoPadre *arbolUsuario = new arbolHMIHDUltimoApuntandoPadre();
            while(!salirAMenuPrin)
            {
                system("clear");
                int opcionArbol = 0;

                cout<<"\n\nARBOL N-ARIO\nDigite alguna de las opciones para utilizar el operador basico o 14 para volver al menu principal:\n\n";
                cout<<"1. Iniciar\n";
                cout<<"2. Destruir\n";
                cout<<"3. PonerRaiz\n";
                cout<<"4. AgregarHijo\n";
                cout<<"5. AgregarHijoMásDerecho\n";
                //cout<<"6. BorrarHoja\n";
                cout<<"7. Raiz\n";
                //cout<<"8. Padre\n";
                cout<<"9. HijoMásIzquierdo\n";
                cout<<"10. HermanoDerecho\n";
                cout<<"11. Etiqueta\n";
                cout<<"12. Modificar Etiqueta\n";
                cout<<"13. NumNodos (Numero actual de nodos en el árbol)\n";
                cout<<"\n14. Salir al menu principal\n";
                cin>>opcionArbol;

                if(opcionArbol == 14)
                {
                    salirAMenuPrin = true;
                    delete arbolUsuario;
                }

                switch (opcionArbol)
                {
                case 1:
                {   
                    //arbolArregloConSenaladorPadre *arbolUsuario = new arbolArregloConSenaladorPadre();
                    arbolHMIHDContador *arbolUsuario = new arbolHMIHDContador();
                    //arbolHMIHDconPunteros *arbolUsuario = new arbolHMIHDconPunteros();
                    //arbolHMIHDUltimoApuntandoPadre *arbolUsuario = new arbolHMIHDUltimoApuntandoPadre();
                    cout<<"\nÁrbol iniciado!";
                    break;
                }
                case 2:
                {    
                    delete arbolUsuario;
                    cout<<"\nArbol destruido!";
                    break;
                }
                case 3:
                {
                    int etiqueta = 0;
                    cout<<"\nIngrese la etiqueta (entero) a insertar: ";
                    cin>>etiqueta;
                    arbolUsuario->PonerRaiz(etiqueta);
                    cout<<"\nRaiz puesta con la etiqueta indicada!";
                    break;
                }
                case 4:
                {
                    int etiquetaPadre = 0;
                    int etiquetaNuevoHijo = 0;
                    cout<<"\nIngrese la etiqueta del nodo al que le desea agregar un hijo: ";
                    cin>>etiquetaPadre;

                    Nodo *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre);
                    //Nodo1 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);
                    //Nodo4 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);
                    //Nodo5 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);

                    cout<<"\nIngrese la etiqueta que va a tener el nuevo hijo: ";
                    cin>>etiquetaNuevoHijo;


                    arbolUsuario->AgregarHijo(nodoPadre, etiquetaNuevoHijo);
                    cout<<"\nHijo agregado al nodo!";
                    break;
                }
                case 5:
                {
                    int etiquetaPadre = 0;
                    int etiquetaNuevoHijo = 0;
                    cout<<"\nIngrese la etiqueta del nodo al que le desea agregar un hijo: ";
                    cin>>etiquetaPadre;

                    Nodo *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre);
                    //Nodo1 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);
                    //Nodo4 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);
                    //Nodo5 *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre, arbolUsuario);

                    cout<<"\nIngrese la etiqueta que va a tener el nuevo hijo mas derecho: ";
                    cin>>etiquetaNuevoHijo;


                    arbolUsuario->AgregarHijoMasDerecho(nodoPadre, etiquetaNuevoHijo);
                    cout<<"\nHijo mas derecho agregado al nodo!";
                    break;
                }
                // case 6:
                // {
                    
                // }
                case 7:
                {
                    Nodo *raiz = arbolUsuario->Raiz();
                    //Nodo1 *raiz = arbolUsuario->Raiz();
                    //Nodo4 *raiz = arbolUsuario->Raiz();
                    //Nodo5 *raiz = arbolUsuario->Raiz();
                    cout<<"\nLa etiqueta de la raiz del arbol es: "<<arbolUsuario->Etiqueta(raiz);
                    break;
                }
                // case 8:
                // {
                    
                // }
                case 9:
                {
                    int etiquetaPadre = 0;
                    cout<<"\nIngrese la etiqueta del nodo del que desea saber su hijo mas izquierdo: ";
                    cin>>etiquetaPadre;

                    Nodo *nodoPadre = arbolUsuario->BuscarEtiqueta(etiquetaPadre);
                    Nodo *HMI = arbolUsuario->HijoMasIzquierdo(nodoPadre);
                    cout<<"\nLa etiqueta del hijo mas izquierdo es: "<<arbolUsuario->Etiqueta(HMI);
                    break;
                }
                case 10:
                {
                    int etiqueta = 0;
                    cout<<"\nIngrese la etiqueta del nodo del que desea saber su hermano derecho: ";
                    cin>>etiqueta;

                    Nodo *nodo = arbolUsuario->BuscarEtiqueta(etiqueta);
                    Nodo *HD = arbolUsuario->HermanoDerecho(nodo);
                    cout<<"\nLa etiqueta del hermano derecho es: "<<arbolUsuario->Etiqueta(HD);
                    break;
                }
                case 11:
                {
                    int etiqueta = 0;
                    cout<<"\nIngrese la etiqueta del nodo: ";
                    cin>>etiqueta;
                    Nodo *nodo = arbolUsuario->BuscarEtiqueta(etiqueta);
                    cout<<"\nLa etiqueta del nodo es: "<<arbolUsuario->Etiqueta(nodo);
                    break;
                }
                case 12:
                {
                    int etiqueta = 0;
                    int etiquetaNueva = 0;
                    cout<<"\nIngrese la etiqueta del nodo al que desea modificarle la etiqueta: ";
                    cin>>etiqueta;
                    cout<<"\nIngrese la nueva etiqueta para el nodo: ";
                    cin>>etiquetaNueva;
                    Nodo *nodo = arbolUsuario->BuscarEtiqueta(etiqueta);
                    arbolUsuario->ModificarEtiqueta(nodo, etiquetaNueva);

                    cout<<"\nLa etiqueta del nodo ahora es: "<<arbolUsuario->Etiqueta(nodo);
                    break;
                }
                case 13:
                {
                    int numNodos = arbolUsuario->NumNodos();
                    cout<<"\nEl numero actual de nodos en el arbol es: "<<numNodos;
                    break;
                }
                default:
                    break;
                }

            }
            break; 
        }

        default:
            break;
        }

    }  
    
    
}