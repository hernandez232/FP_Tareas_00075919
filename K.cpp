#include <iostream>

using namespace std;

int main(){
    int f, c, k, matriz [10][10], matriz2 [10][10];

    cout << "Ingrese la cantidad de filas de la matriz: "; cin >> f;
    cout << "Ingrese la cantidad de columnas de la matriz: "; cin >> c;
    cout << "Ingrese el escalar (k) a multiplicar: "; cin >> k;
    cout << endl;

    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << "Ingrese el dato ["<<i<<"]["<<j<<"]: "; cin >> matriz [i][j];
        }
    }

    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            matriz2 [i][j] = (matriz [i][j])*k;
        }
    }

    cout << endl;
    cout << "La matriz multiplicada por "<<k<<" es: " << endl;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << matriz2 [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}