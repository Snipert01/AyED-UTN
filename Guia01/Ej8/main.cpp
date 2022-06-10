#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    float c;
    cout << "Ingresar los tres valores: ";
    cin >> a >> b >> c;

	if (a == b) { // Seguro NO ES escaleno
		if (a == b) {
			cout << "Es Equilátero" << endl;
		} else {
			cout << "Es isósceles (c distinto)" << endl;
		}
	} else { //seguro no es equilátero
		if (b == c) {
			cout << "Es isósceles (a distinto)" << endl;
		} else if (a == c) {
			cout << "Es isósceles (b distinto)" << endl;
		} else {
			cout << "Es Escaleno" << endl;
        }
    }
    return 0;
}