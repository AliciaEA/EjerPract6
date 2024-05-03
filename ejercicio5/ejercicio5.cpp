/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente: Cantidad de alumnos aprobados.
Cantidad de alumnos reprobados. Promedio general del grupo*/

#include <iostream>
using namespace std;

#define MAX 8
#define notaAprobada 60

int aprobados, reprobados;

int main()
{
    // Variables
    int nota[MAX], cant, suma = 0, cantAprobados = 0, cantReprobados = 0;
    float promedio;

    // Solicitud Cantidad
    cout << "Cantidad de notas de alumnos a ingresar (maximo 8): " << endl;
    cin >> cant;

    if (cant <= MAX && cant >= 0)
    {
        for (int i = 0; i < cant; i++)
        {
            // Ingreso de notas
            cout << "Ingrese la nota del alumno " << i + 1 << ": ";
            cin >> nota[i];
            cout << endl;
        }

        for (int i = 0; i < cant; i++)
        {
            suma += nota[i];
            // Aprobados o reprobados
            if (nota[i] >= notaAprobada)
            {
                cantAprobados++;
            }
            else
            {
                cantReprobados++;
            }
        }

        promedio = suma / cant;
        
        //Salidas
        cout << "El promedio general del grupo es: " << promedio << endl;
        cout << "La cantidad de alumnos aprobados es: " << cantAprobados << endl;
        cout << "La cantidad de alumnos reprobados es: " << cantReprobados << endl;
        cout << "Total de alumnos: " << cant << endl;
    }
    else if (cant <= 0)
    {
        cout << "Cantidad invalida, vuelva a intentar..." << endl;
        main();
    }
    else
    {
        cout << "La cantidad de alumnos no puede ser mayor a " << MAX << endl;
        main();
    }
}