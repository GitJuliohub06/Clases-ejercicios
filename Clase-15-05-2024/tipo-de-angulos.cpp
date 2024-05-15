/*Desarrolle un programa que considere las siguientes reglas:
Un ángulo se considera agudo si es menor de 90°, obtuso si es mayo de 90° y
recto si es igual a 90°.
El programa debe de solicitarle a un usuario que ingrese un ángulo en grados y
que le muestre un mensaje de que tipo de ángulo es.*/
#include <iostream>
using namespace std;
int main(){
float angulo = 0.00;
cout<<"Ingrese el valor de un angulo para conocer de que tipo es (agudo, obtuso o recto): ";
cin>>angulo;

    if (angulo >90){
    cout<<"El angulo con valor de "<<angulo<<" grados es obtuso.";       
    }
    else if(angulo<90) {
        cout<<"El angulo con valor de "<<angulo<<" grados es agudo.";  
    }
   else {
    cout<<"El angulo con valor de "<<angulo<<" grados es recto.";  
   }
    return 0;
}