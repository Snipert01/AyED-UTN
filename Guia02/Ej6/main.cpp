#include <iostream>
using namespace std;

unsigned long int factorial (unsigned int n)
{
    unsigned long int fact = 1;
    for (unsigned int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "El factorial es: " << fact << endl;
    return 0;
}

int main ()
{
    cout << "Ingrese un numero: " << endl;
    unsigned int i;
    cin >> i;
    factorial (i);
    return 0;
}