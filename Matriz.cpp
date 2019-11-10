#include <iostream>

using namespace std;

int main (){
    int f, c, matriz [10][10];
    cout << "Ingrese el numero de filas de las matriz: "; cin >> f;
    cout << "Ingrese el numero de columnas de la matriz: "; cin >> c;
    cout << endl;

    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << "Ingrese el numero de la posicion ["<<i<<"]["<<j<<"]: ";
            cin >> matriz [i][j];
        }
    }

    cout << endl;
    cout << "La matriz ingresada es:" << endl;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << matriz [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}