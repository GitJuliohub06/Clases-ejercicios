#include <iostream>
using namespace std;
int main(){
    
    int n,i,m;
    int p = 1;
    cout<<"Ingrese un valor entero n, el prorama le dira si este es primo: ";
    cin>>n;
    for (int i=n-1; i>=2; i= i-1)
{
        m = n%i;     
    
    if (m ==0)
    {
        cout<<n<<" no es primo";
        p = 0;
        break;
    }
}

if (p)
{
    cout<<n<<" es primo";
}

    return 0;
}