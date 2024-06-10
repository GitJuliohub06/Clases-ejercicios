#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{

    int x;
    int *apuntador= &x;  //creamos un apuntador a la memoria de x 
    cout<<"Ingrese su edad: ";
    cin>>*apuntador;  //almacenamos n la memoria el dato 
    

if (*apuntador>=18){
    cout<<"Usted es mayor de edad \n";
}

else{
        cout<<"Usted es menor de edad \n";
}

    cout<<"El valor ingresado fue: "<< *apuntador<<endl ;

    cout<<"El espacio de memoria de la variable es:  "<< &apuntador <<"\n";

    delete [] apuntador;  //Despues de operar con punteros es necesario liberar la memoria
    apuntador = NULL;
    
    return 0;
}