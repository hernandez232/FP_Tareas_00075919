#include <iostream>

using namespace std;

int main (){
    int n=1, suma=0, promedio=0, arre [50], x;

    cout << "Ingrese la magnitud del arreglo: "; cin >> x;
    cout << endl;
    for (int i=0; i<x; i++){
        cout << "Ingrese el dato " << n << ": "; 
        cin >> arre [i];
        suma += arre [i];
        n++;
    }

    promedio = suma/x;

    cout << endl;
    cout << "El promedio de los " << x << " numeros ingresados es: " << promedio;

    return 0;
}