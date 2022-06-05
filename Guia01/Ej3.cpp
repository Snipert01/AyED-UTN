#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingresar valor A: ";
    cin >> a;
    cout << "Ingresar valor B: ";
    cin >> b;
    int aux=a;
    a=b;
    b=aux;
    cout <<"El valor de A es: "<< a <<"\nEl valor de B es: "<< b << endl;
    return 0;
}