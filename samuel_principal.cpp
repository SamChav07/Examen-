#include <iostream>
#include "Ejercicio1.cpp"
#include "Gabriel.cpp"
#include "iver_ejercicio3.cpp"

using namespace std;

void menu()
{
    cout << "" << endl; 
    cout << "1. Determinar cuanto pagara una persona en un tienda. " << endl;
    cout << "2. Determinar cuanto debe pagar una persona por N hamburguesas. " << endl;
    cout << "3. Calcular el bono en un CAT" << endl;
    cout << "4. Salir..." << endl;
}

int main()
{
    int opcion;
    do {
        menu();
        cout << "Ingrese el ejercicio a ejecutar (1-3):\t" << endl;
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
        case 4:
            cout << "Saliendo...";
            break;
        default:
        cout << "Opción Invalida. Ingrese un numero del 1 - 4..." << endl;
        break;
        }
    } while (opcion != 4);
    
    return 0;
}