#include <iostream>
using namespace std;
int main()
{
    int num;
    do
    {
        cout << "Ingrese un número: ";
        cin >> num;
        cout << num << " es " << (num >= 0 ? "Positivo" : "Negativo") << endl;
    } while (num != 0);

    cout << endl << "== Variante b ===" << endl << endl;
    cout << "Ingrese un número: ";
    cin >> num;
    while (num != 0)
    {
        cout << num << " es " << (num > 0 ? "Positivo" : "Negativo") << endl;
        cout << "Ingrese un número: ";
        cin >> num;
    }
    return 0;
}
