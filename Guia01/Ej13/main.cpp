#include <iostream>
using namespace std;
int main ()
{
    unsigned long long granos = 1; //granos x casillero
    unsigned long long totgranos = 1; //total de granos en casillero 1
    int casillero; //casillero actual
    
    for(casillero = 2; casillero < 65; casillero++)
    {
        granos *= 2;
        totgranos += granos;
        cout << "En el casillero " << casillero << " con granos " << granos << "da un tablero con " << totgranos << endl;
    }
    cout << "El numero de granos es: " << totgranos << endl;
    return 0;
}