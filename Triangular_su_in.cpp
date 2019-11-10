#include <iostream>

using namespace std;

int main (){
    int f, c, matriz [10][10], matriz2 [10][10];

    cout << "Ingrese el numero de filas de la matriz: "; cin >> f;
    cout << "Ingrese el numero de columnas de la matriz: "; cin >> c;
    cout << endl;
    
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << "Ingrese el numero de la posicion ["<<i<<"]["<<j<<"]: ";
            cin >> matriz [i][j];
            matriz2 [i][j] = matriz [i][j];
        }
    }

    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            if (i>j){
                matriz [i][j] = 0;
            }
        }
    }

    cout << endl;
    cout << "La matriz triangular superior es: " << endl;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << matriz [i][j] << " ";
        }
        cout << endl;
    }

    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            if (i<j){
                matriz2 [i][j] = 0;
            }
        }
    }

    cout << endl;
    cout << "La matriz triangular inferior es: " << endl;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << matriz2 [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}