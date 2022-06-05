#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    cout << "Ingresar valor A: ";
    cin >> a;
    cout << "Ingresar valor B: ";
    cin >> b;
if(a>b)
{
        cout<<"El mayor valor es A"<<endl;
    }

    else if(a<b)
    {
        cout<<"El mayor valor es B"<<endl;
    }

    else{
        cout<<"Los valores son iguales"<<endl;
    }
}