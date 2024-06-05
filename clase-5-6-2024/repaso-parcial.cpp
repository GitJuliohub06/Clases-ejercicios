#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int opcion_usuario = 0;
float pmens = 0, SBR= 0, Fi_mes[]={},IBC_Dolraes=0,IBC_colones[]={},  t=0, w=0, n=0, i=0, IPCr=0, IPCi=0, Fi = 0;    

float sumadelIBC_colones=0, sumadelIBC_Dolares=0; 


do{
    cout<<"\t---MENU---\n\n";
    cout<<"1. Pension para los optados\n2. Pension para los afiliados del Sistema Publico de Pensiones\n3. Pension de los afiliados al Sistema privado (AFP)\n4. Salir\n\n";
    cout<<"Ingrese su opcion aqui: ";
    cin>>opcion_usuario;

if ((opcion_usuario != 1)&&(opcion_usuario!=2)&&(opcion_usuario!=3)&&(opcion_usuario!=4)){
    cout<<"la opcion " <<opcion_usuario<<" no existe, por favor ingrese una opcion valida\n\n";
}
switch (opcion_usuario){
case 1: cout<<"\tEligio la opcion de pension para los optados.\n";
cout<<"";
Fi= IPCr/IPCi;
 for(int j=1;j<=t-w;j++){
    sumadelIBC_colones= (IBC_colones*Fi)/8.75;
}
SBR =













break;

case 2: cout<<"2";
break; 

case 3: cout<<"3";
break;

case 4: cout<<"4";
break;




}
}while((opcion_usuario != 1)&&(opcion_usuario!=2)&&(opcion_usuario!=3)&&(opcion_usuario!=4));


    return 0;
}