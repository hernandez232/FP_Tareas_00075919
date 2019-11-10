#include <iostream>
#include <string.h> // Esta libreria permite usar "strcmp"

using namespace std;

int main (){
    int i = 1;
    char contrareal[]="Hola999", contra [20], usuario[20];
    
    cout << "¡Bienvenido a Facebook!" << endl << endl << "Usuario: ";
    cin >> usuario;
    proceso:
    cout << "Contraseña: ";
    cin >> contra;

    if (strcmp(contrareal,contra) == 0){ // "strcmp" sirve para comparar cadenas (segun lo que entendí), si se igualan a 1 son distintas...
        cout << endl;
        cout << "Contraseña correcta";
    } 
    else{
        while (i < 4){
            cout << "Error de credenciales" << endl << endl;
            i += 1;
            goto proceso;
        }

        if (i == 4){
            cout << "Su conexion no es la adecuada" << endl << endl;
            i += 1;
            goto proceso;
        }

        if (i == 5){
            cout << "Su cuenta no existe";
        } 
    }

    return 0;
}