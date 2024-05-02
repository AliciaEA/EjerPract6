/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>
using namespace std;
#define MAX 20

int main()
{
    int array1[MAX];
    int array2[MAX];
    int array3[MAX];
    int longitud;

    cout <<"Ingresa la longitud del vector: ";
    cin >> longitud;

    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingresando datos para el vector 1..." << endl;
        cout << "Posicion "<< i + 1 << ") Dime un numero: ";
        cin >> array1[i];
    }
    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingresando datos para el vector 2..." << endl;
        cout << "Posicion "<< i + 1 << ") Dime un numero: ";
        cin >> array2[i];
    }
    array3[0] = 0;
    for (int i = 1; i < longitud + 1; i++)
    {
        array3[i] = array3[i - 1] + (array1[i - 1] + array2[i - 1]);
        cout << "Sumando..." << array3[i] << endl;
    }
}
