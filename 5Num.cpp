#include <iostream>

using namespace std;

int main (){
    int n=1, arre [5];

    cout << "Ingrese un arreglo de cinco numeros" << endl << endl;
    for (int i=0; i<5; i++){
        cout << "Ingrese el dato " << n << ": "; 
        cin >> arre [i];
        n++;
    }

    cout << endl;
    cout << "El arreglo de 5 numeros es: ";
    for (int i=0; i<5; i++){
        cout << arre [i] << " ";
    }

    return 0;
}