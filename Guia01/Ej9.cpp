#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Ingresar los tres valores: ";
    cin >> a >> b >> c;

    cout << "Los valores ingresados son: " << a << " " << b << " " << c << endl;
    cout << "Ordenados: ";
	if (a < b) {
		if (b < c) { //ya estaban ordenados
			cout << a << " - " << b << " - "<< c << endl;
		} else { //tres antes que dos
			if (a < c) { // tres entre uno y dos
				cout << a << " - " << c << " - "<< b << endl;
			} else { // tres antes que uno y dos
				cout << c << " - " << a << " - "<< b << endl;
			}
		}
	} else { //dos antes que uno
		if (a < c) { //tres al final
			cout << b << " - " << a << " - "<< c << endl;
		} else { // tres antes que uno
			if (b < c) { // tres entre dos y uno
				cout << b << " - " << c << " - "<< a << endl;
			} else { // tres antes que dos y uno
				cout << c << " - " << b << " - "<< a << endl;
			}
		}
	}
	return 0;
}