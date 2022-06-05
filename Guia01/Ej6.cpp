#include <iostream>
using namespace std;
int main()
{
    float medida;
    cout << "Ingrese la medida: ";
    cin >> medida;
    if (medida < 0)
    {
        cout << "La medida no puede ser negativa" << endl;
    }
    else
    {
        cout << "La medida es: " << medida << endl;
    }
    medida*4;
    cout << "El perimetro del cuadrado es: " << medida*4 << endl;
    medida*medida;
    cout << "El area del cuadrado es: " << medida*medida << endl;
    return 0;
}

