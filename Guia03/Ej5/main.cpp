#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream archiesc;
    archiesc.open("texto.txt");
    if (!archiesc)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }

    cout << "Ingresar palabras donde haya como máximo 80 caracteres por renglón: " << endl;
    string linea;
    while (getline(cin, linea))
    {
        archiesc << linea << endl;
    }
    linea.size();
    if (linea.size() > 80)
    {
        cout << "La palabra es muy larga" << endl;
    }
    archiesc.close();
    return 0;
}