#include <iostream> 
using namespace std;
int main(){
int numero = 0;
int pares = 0;
int impares = 0;

do
{
    cout<<"Ingrese un numero: (digite 0 para salir)";
    cin>>numero;

    if ((numero%2==0) && numero !=0){
    pares++;
    }
    else {
        impares++;
        }

} while (numero !=0);
cout<<"La cantidad de pares es: "<<pares<<endl;
cout<<"La catidad de impares es: "<<impares<<endl;


    return 0;
}