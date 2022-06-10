#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int nro;
    float cantDatos = 0;
    float sum = 0;
    float promedio;

   ifstream archilec;
    archilec.open("01entrada.txt");
    if (!archilec)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    while (archilec >> nro)
    {
        cout << "Ingresado: " << nro << endl;
        sum += nro;
        ++cantDatos;
        promedio = sum / cantDatos;
    }
        cout << "Cantidad de datos ingresados: " << cantDatos << endl;
        cout << "Suma de datos: " << sum << endl;
        cout << "Promedio: " << promedio << endl;
}
