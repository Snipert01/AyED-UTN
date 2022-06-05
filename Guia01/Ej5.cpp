#include <iostream>
using namespace std;
int main()
{
    int angulo1;
    int angulo2;
    cout<<"Ingresar primer ángulo: "<<endl;
    cin>>angulo1;
    cout<<"Ingresar segundo ángulo: "<<endl;
    cin>>angulo2;

if (angulo1+angulo2 > 180)
{
    cout<<"Los ángulos no pueden sumar más de 180°"<<endl;
}
else
{
    cout<<"Los ángulos suman: "<<angulo1+angulo2<<endl;
}
return 0;
}