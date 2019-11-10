#include <iostream>

using namespace std;

int main (){
    int alu=1, nt =1, a, n;
    float suma [50], promedio [50], notas [50][50];

    cout << "Ingrese la cantidad de alumnos: "; cin >> a;
    cout << "Ingrese la cantidad de notas: "; cin >> n;
    cout << endl;

    for (int i=0; i<a; i++){
        cout << "Ingrese las notas del alumno "<<alu<<":" << endl;
        for (int j=0; j<n; j++){
            cout << "Ingrese la nota "<<nt<<": ";
            cin >> notas [i][j];
            suma [i] += notas [i][j];
            nt++;
        }
        cout << endl;
        promedio [i] = suma [i]/n;
        alu++;
        nt = 1;
    }
    
    alu = 1;
    for (int i=0; i<a; i++){
        cout << "El promedio del alumno "<<alu<<" es: ";
        cout << promedio [i] << endl;
        alu++;
    }
    return 0;
}