#include <iostream>
using namespace std;

int factorial(int);
unsigned long int factorialrec(unsigned int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * factorialrec(n - 1);
    }
}
int main ()
{
    cout << "Ingrese un número: " << endl;
    int i;
    cin >> i;
    factorial(i);
    return 0;
}