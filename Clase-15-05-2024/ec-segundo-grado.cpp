/*Realice un programa que calcule la solución de una ecuación de segundo
grado. El usuario tiene que ingresar los valores de a, b y c; y el programa le
debe de mostrar la respuesta de las dos raíces.
Nota: considere el caso si a =0 y b= 0.
La fórmula es la siguiente:*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a=0,b=0,c=0, x1=0, x2=0;
cout<<"calculadora para resolver una ecuacion de segundo grado de tipo ax^2+bx+c=0";
cout<<"\n\nIngrese el valor de a: ";
cin>>a;
cout<<"\n\nIngrese el valor de b: ";
cin>>b;
cout<<"\n\nIngrese el valor de c: ";
cin>>c;
if (a == 0 && b == 0){
    cout<<"Los valores de a y b no pueden ser 0";
}
 else if (a==0){
    cout<<"El valor de a no puede ser 0";
 }
    else {
        x1= ((-b) + sqrt(pow (b,2)-(4*a*c))) /(2*a);
        x2= ((-b) - sqrt(pow (b,2)-(4*a*c))) /(2*a);
cout<<"Los valores que puede tomar x son: \n"<<"x1= "<<x1<<"\n"<<"x2= "<<x2;

    }

    return 0;
}