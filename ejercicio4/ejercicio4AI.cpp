#include <iostream>
using namespace std;

int main()
{
    float notas[10];
    float suma = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Proporcione la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / 10;
    cout << "El promedio general de la seccion es: " << promedio << endl;
    return 0;
}