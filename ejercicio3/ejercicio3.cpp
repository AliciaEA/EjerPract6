//Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.

#include<iostream>
#include<cmath>
using namespace std;

int sumatoria = 0;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        sumatoria += pow(i,2);
    }
    cout<<"La suma de los cuadrados de los numeros del 1 al 100 es:" << sumatoria;
    return 0;
}