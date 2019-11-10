#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n = 0, fac = 1, i = 0;
    cout<<"Ingrese un numero: "; cin>>n;

    for (i = n; i >= 1; i--){
        fac *= i;
        
    }
    cout<<"El factorial del numero ingresado es: "<<fac;

    return 0;
}