#include <iostream>
#include <iomanip>
using namespace std;

// Función para calcular el descuento por Seguro Social
double calcularSeguroSocial(double salario) {
    double base = salario > 1000 ? 1000 : salario;
    double descuento = base * 0.03;
    return descuento > 30 ? 30 : descuento;
}

// Función para calcular el descuento por AFP
double calcularAFP(double salario) {
    return salario * 0.0725;
}

// Función para calcular la renta
double calcularRenta(double salario) {
    double ss = calcularSeguroSocial(salario);
    double afp = calcularAFP(salario);
    double neto = salario - ss - afp;
    double renta = 0.0;

    if (neto <= 472.99) {
        renta = 0.0;
    } else if (neto <= 895.24) {
        renta = (neto - 472.00) * 0.10;
    } else if (neto <= 2038.10) {
        renta = (neto - 895.24) * 0.20 + 42.52;
    } else {
        renta = (neto - 2038.10) * 0.30 + 288.57;
    }
    return renta;
}

// Función para mostrar el menú y ejecutar opciones
void mostrarMenu(double salario) {
    int opcion;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Calcular descuento por Seguro Social\n";
        cout << "2. Calcular descuento por AFP\n";
        cout << "3. Calcular descuento por Renta\n";
        cout << "4. Calcular total de descuentos y salario neto\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        double ss, afp, renta, totalDescuentos, neto;

        switch (opcion) {
            case 1:
                ss = calcularSeguroSocial(salario);
                cout << fixed << setprecision(2);
                cout << "Descuento por Seguro Social: $" << ss << endl;
                break;
            case 2:
                afp = calcularAFP(salario);
                cout << fixed << setprecision(2);
                cout << "Descuento por AFP: $" << afp << endl;
                break;
            case 3:
                renta = calcularRenta(salario);
                cout << fixed << setprecision(2);
                cout << "Descuento por Renta: $" << renta << endl;
                break;
            case 4:
                ss = calcularSeguroSocial(salario);
                afp = calcularAFP(salario);
                renta = calcularRenta(salario);
                totalDescuentos = ss + afp + renta;
                neto = salario - totalDescuentos;
                cout << fixed << setprecision(2);
                cout << "\n--- DETALLE DE DESCUENTOS ---\n";
                cout << "Seguro Social: $" << ss << endl;
                cout << "AFP: $" << afp << endl;
                cout << "Renta: $" << renta << endl;
                cout << "Total Descuentos: $" << totalDescuentos << endl;
                cout << "Salario Neto: $" << neto << endl;
                break;
            case 0:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 0);
}

int main() {
    double salario;
    cout << "Ingrese su salario mensual bruto: $";
    cin >> salario;

    if (salario <= 0) {
        cout << "El salario debe ser mayor que 0.\n";
        return 1;
    }

    mostrarMenu(salario);
    return 0;
}
