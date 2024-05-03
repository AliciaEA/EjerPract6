/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
using namespace std;
#define MAX 10

int main()
{
    // Vectores y variables
    int vector1[MAX];
    int vector2[MAX];
    int producto = 0;
    int longitud;

    // Solicitud Longitud

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    if (longitud <= MAX && longitud > 0)
    {
        // Vector 1
        for (int i = 0; i < longitud; i++)
        {
            cout << "ingrese el valor del vector 1 en la posicion " << i + 1 << ": ";
            cin >> vector1[i];
        }
        
        cout << endl;
        // Vector 2
        for (int i = 0; i < longitud; i++)
        {
            cout << "ingrese el valor del vector 2 en la posicion " << i + 1 << ": ";
            cin >> vector2[i];
        }

        // Multiplicacion de vectores
        for (int i = 0; i < longitud; i++)
        {
            producto += vector1[i] * vector2[i];
        }
        cout << endl
             << "El producto de los dos vectores es: " << producto;
    }

    // Condiciones
    else if (longitud <= 0)
    {
        cout << "Longitud invalida... vuelve a intentarlo" << endl
             << endl;
        main();
    }

    else
    {
        cout << "La longitud maxima es 10, vuelve a intentarlo" << endl
             << endl;
        main();
    }
}