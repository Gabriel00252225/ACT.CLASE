#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, Result, ISSS, AFP, Rent, SalaryGross, All, SalaryNet;
    int Selection;

    // Mostrar opciones
    cout << "Enter your gross salary:" << endl;
    cin >> SalaryGross;
    cout << "-----MENU-----" << endl;
    cout << "|1. ISSS     |" << endl;
    cout << "|2. AFP      |" << endl;
    cout << "|3. Rent     |" << endl;
    cout << "|4. All      |" << endl;
    cout << "|5. Exit     |" << endl;
    cout << "Selection: ";
    cin >> Selection;

    // Calcular el descuento por ISSS
    switch (Selection)
    {
    case 1:
        (SalaryGross <= 1000);
        if (SalaryGross >= 1000)
        {
            ISSS = SalaryGross - 30;
            cout << "The ISSS discount: $" << ISSS;
        }
        else if (SalaryGross <= 472.99 && SalaryGross > 0)
        {
            cout << "The ISSS discount: $" << ISSS;
        }
        else if (SalaryGross < 1000)
        {
            ISSS = SalaryGross * 0.03;
            cout << "The ISSS discount is: $" << ISSS;
        }
        break;
    case 2:
        if (SalaryGross <= 472.99)
        {
            cout << "No discount applies" << endl;
        }
        else
        {
            AFP = SalaryGross * 0.0725;
            cout << "The AFP discount is: $" << AFP;
        }
        break;
    case 3:
        if (SalaryGross <= 895.24)
        {
            ISSS = SalaryGross * 0.03;
            AFP = SalaryGross * 0.0725;
            Rent = (SalaryGross - (AFP + ISSS)) * 0.1;
            cout << "discount for Rent: $" << Rent;
        }
        else if (SalaryGross <= 2038.10)
        {
            if (SalaryGross < 1000)
            {
                ISSS = SalaryGross * 0.03;
                AFP = SalaryGross * 0.0725;
                Rent = (SalaryGross - (AFP + ISSS)) * 0.2;
                cout << "discount for Rent: $" << Rent;
            }
            else if (SalaryGross >= 1000)
            {
                ISSS = 30;
                AFP = SalaryGross * 0.0725;
                Rent = (SalaryGross - (AFP + ISSS)) * 0.2;
                cout << "discount for Rent: $" << Rent;
            }
        }
        else if (SalaryGross >= 2038.10)
        {
            ISSS = 30;
            AFP = SalaryGross * 0.0725;
            Rent = (SalaryGross - (AFP + ISSS)) * 0.3;
            cout << "discount for Rent: $" << Rent;
        }
        else
        {
        }
        break;
    case 4:
    {
        if (SalaryGross >= 472.99 && SalaryGross < 895.24)
        {
            ISSS = SalaryGross * 0.03;
            AFP = SalaryGross * 0.0725;
            Rent = (SalaryGross - (AFP + ISSS)) * 0.1;
            All = (SalaryGross - (ISSS + AFP + Rent));
            SalaryNet = All;

            cout << "Discount details" << endl;
            cout << "ISSS: $" << ISSS << endl;
            cout << "AFP: $" << AFP << endl;
            cout << "Rent: $" << Rent << endl;
            cout << "Total discount: $" << All << endl;
            cout << "------------------------------" << endl;
            cout << "Net Salary: $" << SalaryNet << endl;
            cout << "Your current salary is: $" << All;
        }
        else if (SalaryGross > 895.24 && SalaryGross <= 2038.10)
        {
            if (SalaryGross >= 1000)
            {
                ISSS = 30;
                AFP = SalaryGross * 0.0725;
                Rent = (SalaryGross - (AFP + ISSS));
                All = (SalaryGross - (ISSS + AFP + Rent)) * 0.2;
                SalaryNet = All;
                cout << "Discount details" << endl;
                cout << "ISSS: $" << ISSS << endl;
                cout << "AFP: $" << AFP << endl;
                cout << "Rent: $" << Rent << endl;
                cout << "Total discount: $" << All << endl;
                cout << "------------------------------" << endl;
                cout << "Net Salary: $" << SalaryNet << endl;
                cout << "Your current salary is: $" << All;
            }
            else
            {
                ISSS = SalaryGross * 0.03;
                AFP = SalaryGross * 0.0725;
                Rent = (SalaryGross - (AFP + ISSS)) * 0.2;
                All = (SalaryGross - (ISSS + AFP + Rent));
                SalaryNet = All;
                cout << "Discount details" << endl;
                cout << "ISSS: $" << ISSS << endl;
                cout << "AFP: $" << AFP << endl;
                cout << "Rent: $" << Rent << endl;
                cout << "Total discount: $" << All << endl;
                cout << "------------------------------" << endl;
                cout << "Net Salary: $" << SalaryNet << endl;
                cout << "Your current salary is: $" << All;
            }
        }
        else if (SalaryGross >= 2038.10)
        {
            ISSS = 30;
            AFP = SalaryGross * 0.0725;
            Rent = (SalaryGross - (AFP + ISSS)) * 0.3;
            All = (SalaryGross - (ISSS + AFP + Rent));
            SalaryNet = All;
            cout << "Discount details" << endl;
            cout << "ISSS: $" << ISSS << endl;
            cout << "AFP: $" << AFP << endl;
            cout << "Rent: $" << Rent << endl;
            cout << "Total discount: $" << All << endl;
            cout << "------------------------------" << endl;
            cout << "Net Salary: $" << SalaryNet << endl;
            cout << "Your current salary is: $" << All;
        }
        break;
    default:
        if (Selection == 5)
        {
            cout << "Que tenga un buen dia!" << endl;
            return 0;
        }
        break;
    }
    }
    return 0;
}