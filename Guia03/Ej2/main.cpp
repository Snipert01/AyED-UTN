#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream archilec;
    archilec.open("02entrada.txt");
    if (!archilec)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    float nro;
    float menor;

    archilec >> nro;
    int i = 1;
    menor = nro;
    int pos = i;
    while (archilec >> nro)
    {
        ++i;
        if (nro <= menor)
        {
            menor = nro;
            pos = i;
        }
    }
    cout << "El menor es: " << menor << " en la posicion: " << pos << endl;
    archilec.close();
    return 0;
}