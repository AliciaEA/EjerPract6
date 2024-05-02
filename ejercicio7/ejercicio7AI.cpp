#include <iostream>
using namespace std;

int main() {
    int n;
    int vector1[10];
    int vector2[10];
    int vector3[10];

    cout << "Ingresa la longitud de los vectores (maximo 10): ";
    cin >> n;

    // Pedir al usuario ingresar el primer vector
    cout << "Ingresa los elementos del primer vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vector1[" << i << "]: ";
        cin >> vector1[i];
    }

    // Pedir al usuario ingresar el segundo vector
    cout << "Ingresa los elementos del segundo vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vector2[" << i << "]: ";
        cin >> vector2[i];
    }

    // Calcular la suma de los vectores
    for (int i = 0; i < n; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar el tercer vector como resultado
    cout << "La suma de los dos vectores es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vector3[" << i << "]: " << vector3[i] << endl;
    }

    return 0;
}