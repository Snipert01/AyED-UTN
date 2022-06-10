#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    float numero;
    int contador = 0;
    double menor = 0;
    ifstream archilec;
    archilec.open("02entrada.txt");
    if (!archilec)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    while (archilec >> numero)
    {
        cout << "Ingresado: " << numero << endl;
        contador++;
        if (contador == 1)
        {
            menor = numero;
        }
        else
        {
            {
                if (numero < menor)
            
                menor = numero;
            }
        }        
    } /*preguntar sobre posicionamiento*/
    cout << "El menor es: " << menor << endl;
    cout << "Cantidad de datos ingresados: " << contador << endl;
    archilec.close();
    return 0;
}