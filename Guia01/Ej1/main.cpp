#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese un valor en mm: ";
    float mm;
    cin >> mm;
    float res = mm / 25.4;
    cout << "El valor en pulgadas es: " << res << endl;
    return 0;
}