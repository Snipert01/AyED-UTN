#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream uno;
    uno.open("04uno.txt");
    if (!uno)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    ifstream dos;
    dos.open("04dos.txt");
    if (!dos)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    ofstream concatenado;
    concatenado.open("04concat.txt");
    if (!concatenado)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    string linea;
    while (getline(uno, linea))
    {
        concatenado << linea << endl;
    }
    while (getline(dos, linea))
    {
        concatenado << linea << endl;
    }
    uno.close();
    dos.close();
    concatenado.close();
    return 0;
}