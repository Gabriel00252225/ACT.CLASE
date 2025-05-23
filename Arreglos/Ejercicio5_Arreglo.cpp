#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Conteo de numeros pares e impares" << endl;
    cout << "Cuantos numero quieres ingresar?" << endl;
    cin >> num;

    int numeros[num], par = 0, impar = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ":";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
cout <<"Cantidad de numeros pares: " << par <<endl;
cout << "Cantidad de numero impares " << impar << endl;
cout << "Cantidad de numero impares " << impar << endl;
    return 0;
}