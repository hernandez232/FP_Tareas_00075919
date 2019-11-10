#include <iostream>

using namespace std;

int main (){
    int n=1, arre [50], x;

    cout << "Ingrese la magnitud del arreglo: "; cin >> x;
    cout << endl;
    for (int i=0; i<x; i++){
        cout << "Ingrese el dato " << n << ": "; 
        cin >> arre [i];
        n++;
    }

    cout << endl;
    cout << "El arreglo de " << x << " numeros es: ";
    for (int i=0; i<x; i++){
        cout << arre [i] << " ";
    }

    return 0;
}