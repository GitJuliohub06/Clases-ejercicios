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
for (int i=num;i>=1;i--)
factorial*=i;

cout<<"El resltado es: "<<factorial;
}

    return 0;
}