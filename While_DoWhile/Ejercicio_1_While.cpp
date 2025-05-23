#include <iostream>
using namespace std;

int main()
{
int contra = 118811, intento;

    do
    {
        cout << "Ingresa tu contrasena" << endl;
        cin >> intento;
        if (intento != contra)
        cout << "Intentalo de nuevo"<<endl;
        else if (intento = contra){
            cout << "Tus contrasena es correcta" << endl;
            return 0;
        }
    } while (contra);


    return 0;
}