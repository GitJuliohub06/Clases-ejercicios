#include <iostream>
using namespace std;
int main(){
float angulo1 = 0.00, angulo2 = 0.00, suma=0.00, resultado=0.00;
cout<<"Ingrese 2 angulos de un triangulo para conocer el valor del tercero. "<<endl;
cout<<"\nIngrese el angulo 1: ";
cin>>angulo1;
cout<<"\n\n";
cout<<"Ingrese el angulo 2: ";
cin>>angulo2;
if (angulo1 <0 || angulo2<0 || (angulo1>180 ||angulo2>180)){
cout<<"Alguno de los valores ingresados no esta permitido ";       
}
else {
suma = angulo1 + angulo2;
resultado = 180 - suma ;
    cout<<"El angulo faltante tiene un valor de "<<resultado;
}
    return 0;
}