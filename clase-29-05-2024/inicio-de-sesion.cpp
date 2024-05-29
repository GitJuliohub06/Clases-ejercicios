#include <iostream>
using namespace std;
int main(){
string nombre[100]={};
int edad [100]={};
string usuario [100]={};
string contrasena [100]={};
int indiceUsuario =0;
int opcion=0;
string Usuariotemporal="";
string Contrasenatemporal="";
bool inicioDeSesion;
do{
        cout<<"\t---Menu de inicio de sesion :\n\t1. Inicio de sesion\n\t2. Registro\n\t3. Salir";cin>>opcion;
        switch (opcion)
        {
        case 1:
        cout<<"Ingrese su nombre de usuario: ";
        cin>>Usuariotemporal;

            for (int i=0;i<100;i++){
            if(Usuariotemporal==usuario[i]){
                cout<<"Ingrese la contrasena: ";
                cin>>Contrasenatemporal;
                do{
                if (Contrasenatemporal==contrasena[i]){

                inicioDeSesion=true;
                break;
                }else {
                    cout<<"Contrasena incorrecta";
                    break;
                }

                }while(true);
            }
        }

        if(inicioDeSesion==false){
            cout<<" o Usuario invalido";
        }
        else {
            cout<<"Bienvenido";
            continue;
        }
            break;

        case 2:
        cout<<"Ingrese su nombre completo: ";
        cin>>nombre[indiceUsuario];
        cout<<"Ingrese su edad: ";
        cin>>nombre[indiceUsuario];
        cout<<"Ingrese nombre de usuario: ";
        cin>>usuario[indiceUsuario];
        cout<<"Ingrese contrasena: ";
        cin>>contrasena[indiceUsuario];

            break;

        case 3:

            break;
        default:
        cout<<"Opcion no valida\n";
            break;
        }
}while (true);
    return 0;
}