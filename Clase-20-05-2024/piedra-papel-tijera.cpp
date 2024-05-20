/*1=piedra
2=papel
3=tijera*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int usuario=0, maquina;
int intentos=3;
do
{
maquina =rand()%3;
cout<<"Intentos: "<<intentos<<endl;
cout<<"Piedra papel o tijera\n\n\tOpciones\n\t1.Piedra\n\t2.Papel\n\t3.Tijera\nEscriba su opcion: ";cin>>usuario;

    if(usuario==maquina){
        cout<<"\nHas empatado\n\n";
    }
    else if((usuario == 1 && maquina==3) || (usuario==2 && maquina ==1) || (usuario==3 && maquina ==2)){
    cout<<"\nHas ganado, la maquina uso: "<<maquina<<"\n\n";
    }
    else if ((usuario == 2 && maquina==3) ||(usuario==1 && maquina ==2)||(usuario==3 && maquina ==1)){
    cout<<"\nHas perdido, la maquina uso: "<<maquina<<"\n\n";
    }

        intentos--;
} while (intentos != 0);



    return 0;
}