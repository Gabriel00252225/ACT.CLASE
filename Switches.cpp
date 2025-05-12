#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double num1, num2, resultado;
    int seleccion;

    // Mostrar opciones
    cout << "Seleccione una operacion:" << endl;
    cout << "1. Sumar dos numeros" << endl;
    cout << "2. Restar dos numeros" << endl;
    cout << "3. Multiplicar dos numeros" << endl;
    cout << "4. Dividir dos numeros" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccion: ";
    cin >> seleccion;

    // Salir si el usuario elige 5
    if (seleccion == 5) {
        cout << "Que tenga un buen dia!" << endl;
        return 0;
    }

    // Solicitar los números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Realizar la operación según la selección del usuario
    switch (seleccion) {
        case 1:
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no es permitida." << endl;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
    }

    return 0; // Fin del programa
}
