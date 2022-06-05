#include <iostream>

using namespace std;

void desarme (int fecha, int& dia, int& mes, int& anio)

{   
    dia = fecha % 100;
    mes = fecha % 10000 / 100;
    anio = fecha / 10000;
}

int main ()
{
    cout << "Ingrese una fecha como AAAAMMDD: " << endl;
    int fecha;
    cin >> fecha;
    int dia, mes, anio;
    desarme(fecha, dia, mes, anio);
    cout <<"Fecha: " << dia << '/' << mes << '/' << anio << endl;
    return 0;
}



