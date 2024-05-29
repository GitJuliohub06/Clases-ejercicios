#include <iostream> 
using namespace std;
int main(){
int numero = 0;
int indicepar = 0;
int indiceimpar = 0;
int pares[100]={};
int impares[100]={};

do
{
    cout<<"Ingrese un numero: (digite 0 para salir)";
    cin>>numero;

    if ((numero%2==0) && numero !=0){
    pares[indicepar]=numero;
    indicepar++;
    }
    else {
        impares [indiceimpar]=numero;
        indiceimpar++;
        }

} while (numero !=0);

cout<<"Resultados: \n\n";
cout<<"Cantidad de pares: "<<indicepar<<endl;
cout<<"Cantidad de impares: "<<indiceimpar<<endl;

for (int i=0;i<indicepar;i++){
    cout<<pares[i]<<" ";
}
for (int j=0;j<indiceimpar;j++){
    cout<<impares[j]<<" ";
}


    return 0;
}