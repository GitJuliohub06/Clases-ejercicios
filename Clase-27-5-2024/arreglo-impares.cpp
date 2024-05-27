#include <iostream>
using namespace std;
int main(){
int tamano=0;
cout<<"Escriba la cantidad de datos que ingresara: ";
cin>>tamano;
int num[tamano];
int impar [tamano];
int j=0;
for(int i=0 ; i<tamano ;i++){
cout<<"Ingrese un numero entero: ";
cin>>num[i];

if(num[i]%2==1){
    impar[j]=num[i];
    j++;
}
}
cout<<"Los numeros impares son: "<<"\n";
for(int k= 0;k<j;k++){
cout<<impar[k]<<"\n";
} 

    return 0;
}