/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

void agregar();

int main()
{
    cout << "Imprimiendo los numeros impares en orden descendente que hay entre 1 y 100..." << endl;
    agregar();
}

void agregar()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
    }
}
