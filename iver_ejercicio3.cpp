#include <iostream>
using namespace std;
void ejercicio3(){
    int numLlamadas;
    double bono;
    
    cout << "Ingrese el número de llamadas atendidas en la semana: ";
    cin >> numLlamadas;
    
    if (numLlamadas > 50 && numLlamadas < 100) {
        bono = 1000.00;
    } else if (numLlamadas > 100 && numLlamadas < 150) {
        bono = 1500.00;
    } else if (numLlamadas > 150) {
        bono = 2000.00;
    } else {
        bono = 0.00;
    }
    
    if (bono > 0.00) {
        cout << "El empleado recibe un bono de C$" << bono << endl;
    } else {
        cout << "El empleado no cumple con las condiciones para recibir un bono." << endl;
    }
    
 
}