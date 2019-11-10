#include <iostream>

using namespace std;

int main (){
    int matriz [2][2];
    cout << "Ingrese los valores de la matriz 2x2" << endl;

    cout << "Ingrese los valores [0][0]: "; cin >> matriz [0][0];
    cout << "Ingrese los valores [0][1]: "; cin >> matriz [0][1];
    cout << "Ingrese los valores [1][0]: "; cin >> matriz [1][0];
    cout << "Ingrese los valores [1][1]: "; cin >> matriz [1][1];

    cout << endl;
    cout << "La matriz es: " << endl;
    cout << matriz [0][0] << " " << matriz [0][1] << endl;
    cout << matriz [1][0] << " " << matriz [1][1] << endl;

    return 0;
}