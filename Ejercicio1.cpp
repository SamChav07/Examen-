#include <iostream>
using namespace std;
void ejercicio1() 
{
  int cant;
  float precio, subtotal, descuento, impuesto, total;

  cout << "Ingrese el precio del artículo: ";
  cin >> precio;

  cout << "Ingrese la cantidad de articulos que desea comprar: ";
  cin >> cant;


  subtotal = cant * precio;

  if (cant >= 2) {
    descuento = subtotal * 0.2;
  } else {
    descuento = 0;
  }

  impuesto = subtotal * 0.15;
  total = subtotal - descuento + impuesto;

  cout << "Subtotal: C$" << subtotal << endl;
  cout << "Descuento: C$" << descuento << endl;
  cout << "Impuesto: C$" << impuesto << endl;
  cout << "Total a pagar: C$" << total << endl;


}