#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream archilec;
    archilec.open("03entrada.txt");
    if (!archilec) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    
    int nro;
    int contador = 0;
    ofstream pares;
    pares.open("03pares.txt");
    if (!pares) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    ofstream impares;
    impares.open("03impares.txt");
    if (!impares) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    while (archilec >> nro) 
    {
        if (nro % 2 == 0)
        {
            pares << nro << endl;
        }
        else
        {
            impares << nro << endl;
        }
        contador++;
    }
    cout << "Cantidad de datos ingresados: " << contador << endl;
    archilec.close();
    pares.close();
    impares.close();
    return 0;
}
