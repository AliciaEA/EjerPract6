#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    int matriz[filas][columnas];
    int matrizTranspuesta[columnas][filas];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}