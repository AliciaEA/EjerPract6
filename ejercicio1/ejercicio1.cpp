/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. */

#include <iostream>
using namespace std;

// Variables Globales
int num;

int agregar(int num);

int main()
{
    cout << "Proporciona hasta que numero natural se desea calcular la suma: ";
    cin >> num;
    if (num < 1)
    {
        cout << "Numero invalido, digite cantidades mayores o igual a 1" << endl;
        main();
    }
    else
    {
        cout << "La suma es: " << agregar(num) << endl;
    }
}

int agregar(int num)
{
    int suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }
    return suma;
}
