/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>
using namespace std;

int suma = 0;

int main(int argc, char const *argv[])
{
    cout << "Sumando... " << endl;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout << "la suma de los numeros pares entre 100 y 200 es: " << suma;
    return 0;
}