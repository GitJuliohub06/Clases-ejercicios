#include <iostream>
using namespace std;

float media(float numero1, float numero2) {
float res = 0;
res = ((numero1 + numero2)/2);
return res;
}



int main(){
float n1=4,n2=7;
float result =0;
result= media(n1,n2);
cout<<"La media es: "<<result;
return 0;
}