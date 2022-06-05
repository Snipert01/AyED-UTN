#include <iostream>

using namespace std;

int celsius (float grados)
{
    float celsius;
    celsius = (grados - 32) / 1.8;
    cout << "Grados Celsius: " << celsius << endl;
}

int main ()
{
    cout << "Ingrese grados Fahrenheit: " << endl;
    float grados;
    cin >> grados;
    celsius(grados);
    return 0;
}	