/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;
#define MAX 10

// Variables
float nota[MAX];
float suma = 0, promedio;

int main()
{
    cout << "Proporcione las notas de los 10 estudiantes: " << endl;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Proporcione la nota del estudiante " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
    }

    for (int i = 0; i < MAX; i++)
    {
        suma += nota[i];
    }

    promedio = suma / MAX;
    cout << endl
         << "El promedio general de la seccion es: " << promedio << endl;
    return 0;
}
