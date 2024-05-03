#include <iostream>
using namespace std;

int main()
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    float vector1[longitud];
    float vector2[longitud];

    cout << "Ingrese los elementos del vector 1:" << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del vector 2:" << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    float productoPunto = 0;
    for (int i = 0; i < longitud; i++)
    {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los vectores es: " << productoPunto << endl;
    return 0;
}