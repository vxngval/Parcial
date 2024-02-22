#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num[20], datos, i;

    cout << "Ingrese múmero de datos:  ";
    cin >> datos;

    for (i = 0; i < datos; i++)
    {
            cout << "Ingrese los datos" << i << ":";
            cin >> num[i];
    }

    cout << "\nDatos ingresados:\n";
    for (i = 0; i < i; i++)
    {
    	cout << num[i] << " ";
        cout << "\n";
    }

    getch();

    return 0;
}
