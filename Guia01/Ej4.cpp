#include <iostream>

using namespace std;

int main()
{
    cout << "Ingresar bultos en stock: " << endl;
    int bultos;
    cin >> bultos;
    cout << "Ingresar bultos que entran en una caja: " << endl;
    int bultos_caja;
    cin >> bultos_caja;
    if (bultos % bultos_caja == 0)
    {
        cout << "Cajas necesarias: " << bultos / bultos_caja << endl;
    }
    else
    {
        cout << "Cajas necesarias: " << bultos / bultos_caja << endl;
    }
    cout << "Sobran " << bultos % bultos_caja << " bultos" << endl;
    return 0;
}