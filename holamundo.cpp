//este es la rama testing
//las librerias se agregan de esta forma
#include <iostream> //iostream es una libreria de C++ para la entrada y la salida de datos
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

/*En C/C++ el programa ocurre dentro del Metodo Principal Main*/
int main()

{
    int menu;
    cout<< "Repasemos lo aprendido \n";  
    //cout y cin son de la libreria de iostream

    cout<< ("Elije una opción. \n1. Tipos de datos. \n2. Entrada y salida de datos. \n3. Estructuras de control. \n4. condicionales.\n");
    cin >>menu;

    switch (menu)
    {
    case 1: {

        cout<< " \n int entero = 20; \n float decimal = 20.5; \n string cadena = *entre comillas -->texto \n char caracter = 'q'; \n bool booleano = false; \n\n";
        int entero = 20;
        float decimal = 20.5;
        string cadena = "texto";
        char caracter = 'q';
        bool booleano = false;

        }break; 
        
    case 2: {
        cout<< " cout<< salida de datos \n cin>>entrada de datos por consola \n";
        }break;
    case 3: {
        system("clear");
        int menu;

        cout<< "1. bucle while \n";
        cout<< "2. bucle for \n";

        cout<< "\n elige una opcion: ";
        cin>> menu;
        switch (menu)
        {
        case 1:{

            cout<<"\nwhile (condición)\n";
            cout<<"{ \n";
            cout<<"     código que se ejecuta \n";
            cout<<"     se recomienda usar un iterador ejemplo --> int i++;\n";
            cout<<"     para evitar un ciclo infinito\n";
            cout<< "} \n";

            }break;
        
        
        case 2: {

            cout<<"for (i = 0; i >= 10; i++)\n";
            cout<<"    //contador//condicional//incremento-decremento\n";
            cout<<"{\n\n";
            cout<<"codigo\n\n";    
            cout<<"}\n\n";
            

            }break;

        } //fin de swich case3

    }break; //break del case 3
    
    default:{
        cout << "nunca pares de aprender, elije una opción \n";
        }break;
    
    }

    return 0;
}
