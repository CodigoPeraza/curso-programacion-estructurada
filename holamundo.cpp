/*=============================COMENTARIO=============================*/
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
    int opcion;
    cout<< "Repasemos lo aprendido \n";  
    //cout y cin son de la libreria de iostream

    /*=============================MENÚ=============================*/
    cout<< ("Elije una opción. \n");
    cout<< "1. Tipos de datos. \n";
    cout<< "2. Entrada y salida de datos. \n";
    cout<< "3. control de flujo \n";
    cout<< "4. condicionales.\n";
    cin >>opcion;
    /*===============================================================*/
    switch (opcion)
    {
        case 1: {

            /*=============================TIPOS DE DATOS=============================*/
            cout<< " \n int entero = 20; \n";
            cout<<"float decimal = 20.5; \n";
            cout<<"string cadena = *entre comillas -->texto \n";
            cout<<"char caracter = 'q'; \n";
            cout<<"bool booleano = false; \n\n";
            }break; 
            /*=========================================================================*/

        case 2: {

            /*==============================E/S DE DATOS ==============================*/
            cout<< " cout<< salida de datos \n ;";
            cout<< "cin>>entrada de datos por consola \n";
            }break;
            /*=========================================================================*/

        case 3: {
            
            system("clear"); 
            //NOTA: si se va a compilar para windows cambiar a system("cls");
            
            int opcion;
            /*=============================MENÚ=============================*/
            cout<< "1. bucle while \n";
            cout<< "2. bucle for \n";
            cout<< "\n elige una opcion: ";
            cin>> opcion;
            system("clear"); 
                //NOTA: si se va a compilar para windows cambiar a system("cls");
                
            /*==============================================================*/
            
            switch (opcion)
            {
            case 1:{

                /*============================= WHILE =============================*/
                cout<<"\nwhile (condición)\n";
                cout<<"{ \n";
                cout<<"     código que se ejecuta \n";
                cout<<"     se recomienda usar un iterador ejemplo --> int i++;\n";
                cout<<"     para evitar un ciclo infinito\n";
                cout<< "} \n";                
                                
                cout<<"/*========================== EJEMPLO WHILE ========================*/\n\n";
                cout<<"imprime n numeros\n\n";
                cout<<"¿cuantos números desea imprimir? \n";
                cout<<":";

                short n;
                cin>>n; 
                system("clear"); 
                //NOTA: si se va a compilar para windows cambiar a system("cls");
                

                int i = 0;            
                while (i <= n)
                {
                    int numero = i;
                    cout<< numero; //imprime el valor de i
                    cout<<"\n";
                    i++; //incrementa el valor de i

                }
                

                /*=================================================================*/
                }break;
            
            
            case 2: {

                /*============================= FOR =============================*/
                cout<<"for (i = 0; i >= 10; i++)\n";
                cout<<"    //contador//condicional//incremento-decremento\n";
                cout<<"{\n\n";
                cout<<"codigo\n\n";    
                cout<<"}\n\n";
                
                /*=========================EJEMPLO FOR==============================*/
                /*========================= FIBONACCI ==============================*/
                int contador;

                cout<< "Cuantos elementos de la sucesión quiere: ";
                cin>> contador;
                
                long a = 0;
                long b = 1;
                long c;
                for (int i = 0; i < contador; i++)
                {
                    cout<< a; 
                    c = a+b;
                    a = b;
                    b = c;
                    cout<<"\n";
                }
                /*==================================================================*/
                }break;

            } //fin de swich case3

        }break; //break del case 3
        
        default:{
            cout << "nunca pares de aprender, elije una opción \n";
            }break;
        
    }

    return 0;
}
