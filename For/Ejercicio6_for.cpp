#include <iostream>
using namespace std;

int main()
{

    int num, suma = 0;

    cout << "Ingresa el numero maximo" << endl;
    cin >> num;

    for (int i = 2; i <= num; i= i +2)
    {
        suma += i;
    }
    cout << "La suma de  los numeros pares es:" << endl;   
    cout << suma << endl;

    return 0;
}