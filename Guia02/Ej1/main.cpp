#include <iostream>
using namespace std;
 
 bool aniobisiesto(int anio)
    {
        bool bisiesto;
        if ((anio % 4 == 0) || (anio % 400 == 0) && (anio % 100 != 0))
        {
            bisiesto = true;
        }

        else
        {
             bisiesto = false;
        }
        return bisiesto;
    }

    int main ()
    {
        cout << aniobisiesto(2000) << endl;
        return 0;
    }