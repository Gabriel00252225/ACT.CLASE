#include <iostream>

using namespace std;

double grado(int c)
{
    return (c * 9 / 5 + 32);
}

int main()
{
    double Cantidad;
    cout << "Conversion de C° a F°" << endl;
    cin >> Cantidad;
    cout << "El resultado es " << grado(Cantidad) << endl;
    return 0;
}