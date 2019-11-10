#include <iostream>

using namespace std;

int main(){
    int n=0, cx=1, cy=1, l=1;
    float x [50], y [50], multi [50], nume= 0, deno =0, pp=0;

    cout << "Ingrese la magnitud de la lista: "; cin >> n;
    cout << endl;

    cout << "Ingrese los valores (X):" << endl;
    for (int i=0; i<n; i++){
        cout << "X" << cx << ": ";
        cin >> x[i];
        cx++;
    }

    cout << endl;
    cout << "Ingrese la ponderacion (Y):" << endl;
    for (int i=0; i<n; i++){
        cout << "Y" << cy << ": ";
        cin >> y[i];
        deno += y[i];
        cy++;
    }

    for (int i=0; i<n; i++){
        multi [i] = x [i] * y [i];
        nume += multi[i];
    }

    pp = nume/deno;

    cout << endl;
    cout << "El promedio ponderado de la lista es: " << pp;

    return 0;
}