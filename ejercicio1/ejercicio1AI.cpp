#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduce un número natural: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "La suma de los números naturales desde 1 hasta " << n << " es " << sum << endl;

    return 0;
}