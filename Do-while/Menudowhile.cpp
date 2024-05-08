#include <iostream>
using namespace std;
int main(){
char opcion;
char variable;
do {
cout<<"\nMenu \n";
cout<<"A Carne asada \n";
cout<<"B pollo \n";
cout<<"C cerdo \n";
cout<<"Seleccione una opcion: ";

cin>>opcion;
cout<<"\n";
cout<<"Opcion seleccionada: ";


    if (opcion !='A' && opcion !='a' && opcion !='B' && opcion !='b' && opcion !='C' && opcion !='c' ){
        cout<<"La opcion "<<opcion<< " no se encuentra determinada, ingrese un caracter reconocido en el menu.";
    }


} while (opcion !='A' && opcion !='a' && opcion !='B' && opcion !='b' && opcion !='C' && opcion !='c');

 if (opcion == 'a' || 'A'){
    cout<<"Carne asada";
 }
 else if ( opcion == 'b' || 'B'){
    cout<<"Pollo";
 } 
 else if ( opcion == 'c' || 'C')
 cout<<"C cerdo";
else {
    cout<<"nada";
}
    return 0;
}