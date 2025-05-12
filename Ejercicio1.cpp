#include <iostream>
#include <cmath>
using namespace std; //

int main() {
    cout <<"Ingresa un numero"<< endl;
    double numero1, suma, resta, division, multi;
    int raise;
    cin>> numero1;

    suma = numero1 + 10;
    cout<<"Suma: "<<suma <<endl;
    
    resta = numero1 - 5;
    cout<<"Resta: "<<resta<< endl;

    multi = numero1 * 2;
    cout<<"Multiplicacion: "<<multi << endl;

    division = numero1 / 4;
    cout<<"Division: "<<division << endl;

    raise = pow(numero1, 1500);
    cout<<"Elevacion: "<<raise << endl;

    bool testing;
    testing = numero1 > 0 &&  1&2==0;
    cout<<"Comprobacion: "<< testing << endl;

    return 0;

}