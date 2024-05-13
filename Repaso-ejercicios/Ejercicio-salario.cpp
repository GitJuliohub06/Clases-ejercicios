#include <iostream>
#include <string>
using namespace std;
int main(){

int horas,horas_base=1600,horas_extra;
float impuestos;
string nombre;
float sueldo;

cout<<"Sistema para calcular su salario segun sus horas trabajas.\n\n";
cout<<"Ingrese su nombre: ";
cin>>nombre;
cout<<"\nIngrese sus horas trabajadas este mes: ";
cin>> horas;
cout<<"\n\n";

    if (horas <=160){
        sueldo = horas*10;
        cout<<nombre<<" su salario es: $"<<sueldo<<" libre de impuestos, pase lindo dia :D.";

    }  

     else if (horas >160) {
        horas_extra=(horas -160) *15; 
        sueldo = (horas_base)+(horas_extra);
      
        if (sueldo <=2000){
        cout<<nombre<<" su salario es: $"<<sueldo<<" libre de impuestos, pase lindo dia :D.";
         }

            if (sueldo > 2000 && sueldo <=2200){
                    
                    horas_extra=(horas -160) *15; 
                    sueldo = (horas_base)+(horas_extra);
      
            impuestos = sueldo*0.2;
             cout<<nombre<<" su salario es: $"<<sueldo - impuestos<<" ya con el 20% de impuestos restado, pase lindo dia :D.";
            }
                        if (sueldo > 2201){
                                                    
                            horas_extra=(horas -160) *15; 
                            sueldo = (horas_base)+(horas_extra);
            
                    impuestos = sueldo*0.3;
                    cout<<nombre<<" su salario es: $"<<sueldo - impuestos<<" ya con el 30% de impuestos restado, pase lindo dia :D.";
                    }
           
       }
    return 0;
    }


