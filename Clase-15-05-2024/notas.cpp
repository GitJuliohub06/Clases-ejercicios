#include <iostream>
#include <string>
using namespace std;
int main(){
float nota_corto_1 = 0.00, nota_corto_2=0.00, nota_parcial_1=0.00,nota_parical_2 =0.00,nota_laboratorio=0.00,nota_proyecto=0.00,promedio=0.00 ;
string nombre;
cout<<"Ingrese su nombre: ";
cin>>nombre;
cout<<"\nIngrese la nota del corto 1: ";
cin>>nota_corto_1;
cout<<"\nIngrese la nota del corto 2: ";
cin>>nota_corto_2;
cout<<"\nIngrese la nota del parcial 1: ";
cin>>nota_parcial_1;
cout<<"\nIngrese la nota del parcial 2: ";
cin>>nota_parical_2;
cout<<"\nIngrese la nota del laboratorio: ";
cin>>nota_laboratorio;
cout<<"\nIngrese la nota del proyecto: ";
cin>>nota_proyecto;

promedio=(nota_corto_1*0.1) + (nota_corto_2*0.1) + (nota_parcial_1*0.15) + (nota_parical_2*0.2) + (nota_laboratorio*0.2) + (nota_proyecto*0.25);
if (promedio >=6.00){
cout<<nombre<<"Su promedio final es de "<<promedio<<" Usted ha aprobado la materia. FELICIDADES!!!! :DDDDDDDD";
}
    else {
        cout<<nombre<<"Su promedio final es de "<<promedio<<" Usted ha reprobado la materia. Ponte a estudiar !!!! :CCCCCCCCC";
    }
    return 0;
}