/*Implementa un programa que solicite al usuario ingresar una matriz y 
luego calcule su transposición. La transposición de una matriz se 
realiza intercambiando filas por columnas. Imprime la matriz 
transpuesta como salida*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // matriz[filas][columnas]
    int matriz1[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 1";
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz1[i][j];
        }

        cout << endl;
    }

    //Salida matriz normal
    cout <<endl << "Imprimiendo matriz 1..." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[i][j];
             cout << "\t";
        }
        cout << endl<< endl;
    }
    cout << endl;

    cout <<endl << "Matriz transpuesta: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[j][i];
            cout << "\t";
        }
        cout << endl<<endl;
    }
    return 0;
}