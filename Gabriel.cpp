#include <iostream>
using namespace std;

void ejercicio2(){


    const double PRECIO_SENCILLA = 50.00;
    const double PRECIO_DOBLE = 75.00;
    const double PRECIO_TRIPLE = 100.00;
    const double CARGO_TARJETA = 0.05; 

    int cantidad_sencillas, cantidad_dobles, cantidad_triples;
    double costo_total, costo_con_cargo;

    
    cout << "Ingrese la cantidad de hamburguesas sencillas que desea comprar: ";
    cin >> cantidad_sencillas;
    cout << "Ingrese la cantidad de hamburguesas dobles que desea comprar: ";
    cin >> cantidad_dobles;
    cout << "Ingrese la cantidad de hamburguesas triples que desea comprar: ";
    cin >> cantidad_triples;
   
    costo_total = cantidad_sencillas * PRECIO_SENCILLA + cantidad_dobles * PRECIO_DOBLE + cantidad_triples * PRECIO_TRIPLE;

    
    costo_con_cargo = costo_total * (1 + CARGO_TARJETA);

    
    cout << "El costo total de las hamburguesas es: C$" << costo_total << endl;
    cout << "Si paga con tarjeta, se le cargara un 5% adicional. El total a pagar es: C$" << costo_con_cargo << endl;

}