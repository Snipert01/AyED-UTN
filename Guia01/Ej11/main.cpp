#include <iostream>
using namespace std;
int main()
{
    const int base {16};
    int a, x = 0;
    cout << "Ingresar el valor: ";
    cin >> a;
    while (a > 0)
    {
        a = a / base;
        x++;
    }
    cout << "La cantidad de cifras es: " << x;
    return 0;
}
    