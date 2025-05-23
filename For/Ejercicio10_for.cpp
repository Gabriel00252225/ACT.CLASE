#include <iostream>
using namespace std;

int main(){

int num, suma;

cout << "Serie Fibonacci" << endl;
cout << "Ingresa el numero de terminos:" << endl;
cin >> num ;

int a = 0, b=1;

cout << "Los terminos de " << num << " en fibonacci son:" <<endl;

for (int i = 0; i < num; i++)
{
    cout << a << " ";
    int siguiente = a+b;
    a=b;
    b= siguiente;
}



    return 0;
}