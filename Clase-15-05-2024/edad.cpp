/*Escriba un programa que al ingresar la edad de un usuario y que indique si es
mayor de edad o no.*/
#include <iostream>
using namespace std;
int main(){
int edad = 0;
cout<<"Ingrese su edad en years: ";
cin>>edad;

    if (edad >=18){
    cout<<"Usted es mayor de edad ";       
    }
    else {
        cout<<"usted es menor de edad";
    }
   
    return 0;
}