/*Considere que está desarrollando una para empresa que trabaja con tipos de
motor (suponemos que se trata del tipo de motor de una bomba para mover
fluidos). Defina una variable que se llame: tipoMotor . Los valores posibles son
0,1, 2, 3, 4.
A través de un condicional switch realice lo siguiente:
a) Si el tipo de motor es 0, mostrar un mensaje indicando “No esta establecido
un valor definido para el tipo de bomba”.
b) Si el tipo de motor es 1, mostrar un mensaje indicando “La bomba es una
bomba de agua”.
c) Si el tipo de motor es 2, mostrar un mensaje indicando “La bomba es una
bomba de gasolina”.
d) Si el tipo de motor es 3, mostrar un mensaje indicando “La bomba es una
bomba de hormigón”.
e) Si el tipo de motor es 4, mostrar un mensaje indicando “La bomba es una
bomba de pasta alimenticia”.
f) Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No
existe un valor válido para tipo de bomba”.*/
#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<"Ingrese un numero acorde al tipo de bomba que desea.";
cout<<"\n1. Bomba de agua \t\n2. Bomba de gasolina \t\n3. Bomba de hormigon \t\n4. Bomba de pasta alimenticia \t";


    return 0;
}