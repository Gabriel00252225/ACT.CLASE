#include <iostream>
using namespace std;
int main()
{

    int Gym, Casa, Pc, MaquinasBrazos, MaquinaCardioHit;
    cout << "Bienvenido, que hicste el Fin De Semana?" << endl;
    cout << "1.Ir a SmartFit" << endl;
    cout << "2.Estar todo el dia en casa" << endl;
    cout << "3.Ir al Decameron" << endl;
    cin >> Gym;

    switch (Gym)
    {
    case 1:
        cout << "Llegas al SmartFit con tu familia y pagas day pass a $5" << endl;
        break;
    case 2:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;
    case 3:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;

    default:
        cout << "Porfavor selciona las deciciones del 1 al 3" << endl;
        break;
    }
    cout << "Que tipo de ejercico haciste en SmartFit?" << endl;
    cout << "1.Eliptica" << endl;
    cout << "2.Maquinas de brazos" << endl;
    cout << "3.Ambas" << endl;
    cin >> MaquinaCardioHit;

    switch (MaquinaCardioHit)
    {
    case 1:
        cout << "Sudaste y te duelen las piernas" << endl;
        break;
    case 2:
        cout << "Te duelen muchos los brazos" << endl;
        break;
    case 3:
        cout << "Te duelen los brazos, piernas y sudaste mucho." << endl;
        break;
    default:
        cout << "Porfavor selciona las deciciones del 1 al 3" << endl;
        break;
    }
    cout << "Despues del SmartFi, donde fuiste con tu familia?" << endl;
    cout << "1.Pizza Hut" << endl;
    cout << "2.Casa" << endl;
    cout << "3.Cinemark" << endl;
    cin >> Casa;

    switch (Casa)
    {
    case 1:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;
    case 2:
        cout << "Llegas a casa cansado y deides jugar a la PC" << endl;
        break;
    case 3:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;
    default:
        cout << "Porfavor selciona las deciciones del 1 al 3" << endl;
        break;
    }
    cout << "Ya en casa en tu habitacion con la PC prendida, que jugaste?" << endl;
    cout << "1.God Of War (2018)" << endl;
    cout << "2.Uncharted 4 (PC)" << endl;
    cout << "3.GTA ONLINE" << endl;
    cin >> Pc;

    switch (Pc)
    {
    case 1:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;
    case 2:
        cout << "Eso no sucedio" << endl;
        return 0;
        break;
    case 3:
        cout << "Jugaste GTA ONLINE desde que llegaste hasta dormirte" << endl;
        break;
    default:
        break;
    }
    return 0;
}
