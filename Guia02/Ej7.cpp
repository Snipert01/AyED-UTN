#include <iostream>
using namespace std;

fibonacci (int n)
{
    if (n < 2)
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    cout << "Ingrese dato: ";
    int dato;
    cin >> dato;
    cout << "El fibonacci de " << dato << " es: " << fibonacci(dato) << endl;
    return 0;
}