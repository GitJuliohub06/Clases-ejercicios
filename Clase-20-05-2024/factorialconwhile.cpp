#include <iostream>
using namespace std;
int main(){
int num=0, factorial = 1;

cout<<"Ingrese un numero para calcular su factorial: ";
cin>>num;

if (num<0){
    cout<<"No se permiten numeros negativos";
}
else{
    cout<<"El factorial de "<<num<<" es ";
while (num>0){
factorial*=num;
num--;
}
cout<<factorial;
}
    return 0;
}