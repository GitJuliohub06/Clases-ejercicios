#include <iostream>
using namespace std;

int suma(int entero1, int entero2) {
int resultado=0;
resultado = (entero1 + entero2);
return resultado;
}

int resta(int numero1, int numero2) {
int res=0;
res = (numero1 - numero2);
return res;
}

int multiplicacion(int numero1, int numero2) {
int res=0;
res = (numero1 * numero2);
return res;
}

float division(float numero1, float numero2) {
float res = 0;
res = (numero1 / numero2);
return res;
}



int main(){
int n1 = 6, n2 = 4;
int respuesta_suma = 0, respuesta_resta=0, respuesta_multiplicacion=0;

float nn1=6, nn2=4, respuesta_division=0;

respuesta_suma=suma(n1,n2);
cout<<"La suma de "<<n1<<" + "<<n2<<"= "<<respuesta_suma;
cout<<endl;
respuesta_resta=resta(n1,n2);
cout<<"La resta de "<<n1<<" - "<<n2<<"= "<<respuesta_resta;
cout<<endl;
respuesta_multiplicacion=multiplicacion(n1,n2);
cout<<"La multiplicacion de "<<n1<<" x "<<n2<<"= "<<respuesta_multiplicacion;
cout<<endl;
respuesta_division=division(nn1,nn2);
cout<<"La division de "<<nn1<<" / "<<nn2<<"= "<<respuesta_division;


    return 0;
}