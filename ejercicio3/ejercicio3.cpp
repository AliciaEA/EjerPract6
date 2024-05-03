/*Escriba el programa para calcular la suma de
los cuadrados de los números entre 1 y 100.*/

#include <iostream>
#include <cmath>
using namespace std;

// Variable Global
int sumatoria = 0;

int main()
{
    cout << "Calculando..." << endl;

    for (int i = 1; i <= 100; i++)
    {
        sumatoria += pow(i, 2);
    }

    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << sumatoria << endl;
}