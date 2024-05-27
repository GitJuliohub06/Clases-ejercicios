#include <iostream>
using namespace std;
int main(){
int tamano=0;
cout<<"Escriba la cantidad de datos que ingresara: ";
cin>>tamano;
int num[tamano];
int par [tamano];
int j=0;
for(int i=0 ; i<tamano ;i++){
cout<<"Ingrese un numero entero: ";
cin>>num[i];

if(num[i]%2==0){
    par[j]=num[i];
    j++;
}
}
cout<<"Los numeros del arreglo son: "<<"\n";
for(int i= 0;i<tamano;i++){
cout<<num[i]<<"\n";
}
cout<<"Los numeros pares son: "<<"\n";
for(int k= 0;k<j;k++){
cout<<par[k]<<"\n";
} 

    return 0;
}