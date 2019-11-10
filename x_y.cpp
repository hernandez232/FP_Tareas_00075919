#include <iostream>

using namespace std;

int main(){
    int n=0, cx=1, cy=1, l=1, x [50], y [50]; 
    cout << "Ingrese la magnitud de la lista: "; cin >> n;
    cout << endl;

    cout << "Ingrese los numeros de la lista X:" << endl;
    for (int i=0; i<n; i++){
        cout << "X" << cx << ": ";
        cin >> x[i];
        cx++;
    }

    cout << endl;
    cout << "Ingrese los numeros de la lista Y:" << endl;
    for (int i=0; i<n; i++){
        cout << "Y" << cy << ": ";
        cin >> y[i];
        cy++;
    }

    cout << endl;
    cout << "Los elementos X y Y de la lista son: " << endl;
    for (int i=0; i<n; i++){
        cout << x[i] << " ";
    }
    
    cout << endl;
    cout << endl;
    
    for (int i=0; i<n; i++){
        cout << y[i] << " ";
    }
    
    return 0;
}