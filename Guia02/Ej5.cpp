#include <iostream>
using namespace std;

int sumatoria (int n)
{
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }
    cout << "La suma es: " << suma << endl;
}

int main ()
{
    cout << "Ingrese un numero: " << endl;
    int i;
    cin >> i;
    sumatoria(i);
    return 0;
}	