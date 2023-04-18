#include <iostream>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio3.cpp"

using namespace std;

void menu()
{
    cout << "" << endl; 
    cout << "1. Determinar la media de una lista indefinida de numeros positivos, terminados con numeros negativos#" << endl;
    cout << "2. Dado el nombre de un mes y si el año es o no bisiesto, deducir el numero de dias del mes" << endl;
    cout << "3. Determina la media de una lista de numeros + terminada con un numero no positivo despues del ultimo numero valido" << endl;
    cout << "0. Salir..." << endl;
}

int main()
{
    int opcion;
    do {
        menu();
        cout << "Ingrese el ejercicio a ejecutar (1-7):\t" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        
        default:
        cout << "Opción Invalida. Ingrese un numero del 1 - 7..." << endl;
        break;
        }
    } while (opcion != 0);
    
    return 0;
}