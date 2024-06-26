/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>
using namespace std;
#define MAX 10

int main()
{
    int longitud = 0;
    int array1[MAX];
    int array2[MAX];
    int array3[MAX];

    cout << "Proporciona la longitud de los vectores (maximo 10): ";
    cin >> longitud;

    if (longitud <= MAX && longitud > 0)
    {
        cout << endl
             << "Ingresando datos para el vector 1..." << endl
             << endl;
        for (int i = 0; i < longitud; i++)
        {
            cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
            cin >> array1[i];
        }

        cout << endl
             << "Ingresando datos para el vector 2..." << endl
             << endl;
        for (int i = 0; i < longitud; i++)
        {
            cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
            cin >> array2[i];
        }

        cout << endl
             << "Calculando resultados..." << endl;
        for (int i = 0; i < longitud; i++)
        {
            array3[i] = (array1[i] + array2[i]);
            cout << "Posicion [ " << i + 1 << " ] = " << array3[i] << endl;
        }
    }
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
