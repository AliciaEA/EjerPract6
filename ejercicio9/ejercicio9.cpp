/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante*/

#include <iostream>

using namespace std;

int main()
{
    // Declaramos matrices
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    // Datos matriz1
    cout << "Matriz 1..." << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Para la fila " << f + 1 << " y la columna " << c + 1 << " El numero es: ";
            cin >> matriz1[f][c];
        }
        cout << endl;
    }
    cout << endl;

    // Datos matriz2
    cout << endl
         << "Matriz 2..." << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Para la fila " << f + 1 << " y la columna " << c + 1 << " El numero es: ";
            cin >> matriz2[f][c];
        }
        cout << endl;
    }
    cout << endl;

    // Salida matriz1
    cout << "Matriz 1..." << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz1[f][c];
            cout << "\t";
        }
        cout << endl <<endl;
    }

    // Salida matriz2
    cout << "Matriz 2..." << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz2[f][c];
            cout << "\t";
        }
        cout << endl << endl;
    }

    // Multiplicacion matrices
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matriz3[f][c] = (matriz1[f][c]) * (matriz2[f][c]);
        }
    }

    // Salida Resultado
    cout << endl
         << "Matriz Multiplicacion Resultado..." << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz3[f][c];
            cout << "\t";
        }
        cout << endl <<endl;
    }
}
