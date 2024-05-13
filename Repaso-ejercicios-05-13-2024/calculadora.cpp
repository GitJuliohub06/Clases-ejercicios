#include <iostream>
#include <string>
using namespace std;
int main(){

int num1,num2;
char op;
cout<<"Calculadora\n\n";
cout<<"Ingrese la letra acorde el tipo de operacion que desea realizar.\n\nA. Suma\nB. Resta\nC. Multiplicacion\nD. Division\nE. saber si su numero es par o impar";
cin>>op;
switch (op){
case 'A': 
cout<<"Ingrese los valores\nNumero 1: ";
cin>>num1; 
cout<<"Numero 2: "; 
cin>>num2;
cout<<"Su resultado es: "<< num1 + num2;



}    
    return 0;
    }


