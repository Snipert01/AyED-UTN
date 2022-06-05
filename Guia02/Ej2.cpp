#include <iostream>
using namespace std;

int fechabn (int dia, int mes, int año)

{   
    int fechabn;
    fechabn = (año * 10000) + (mes * 100) + dia;
    return fechabn;
}

int main ()
{
    cout << "Ingrese día: " << endl;
    int dia;
    cin >> dia;
    cout << "Ingrese mes: " << endl;
    int mes;
    cin >> mes;
    cout << "Ingrese año: " << endl;
    int año;
    cin >> año;
    cout << "Fecha: " << fechabn(dia, mes, año) << endl;
    return 0;
}



