#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Ingrese el número de filas y columnas de la primera matriz: ";
    cin >> m >> n;
    int first[m][n];
    cout << "Ingrese los elementos de la primera matriz: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }
    cout << "Ingrese el número de filas y columnas de la segunda matriz: ";
    cin >> p >> q;
    if (n!= p) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
    } else {
        int second[p][q];
        int product[m][q];
        cout << "Ingrese los elementos de la segunda matriz: ";
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> second[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                product[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    product[i][j] += first[i][k] * second[k][j];
                }
            }
        }
        cout << "El producto de las matrices es: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}