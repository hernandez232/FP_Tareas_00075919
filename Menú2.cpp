#include <iostream>
#include <string.h>

using namespace std;
int main (){
    int eleccion, comida, comida2, comida3, comida4, comida5, orden;
    cout << "¡Bienvenido!" << endl;
    proceso:
    cout << "Ingrese el numero de la izquierda acorde a la opcion que desea" << endl;
    cout << "1. Desayuno" << endl << "2. Almuerzo" << endl << "3. Cena" << endl << "4. Postres" << endl << "5. Antojos" << endl << "6. Salir" << endl << endl << "Respuesta: ";
    cin >> eleccion;
    cout << endl;

    switch (eleccion){
        case 1:
        cout << "Las opciones de desayuno son las siguientes: " << endl;
        cout << "1. Pupusas" << endl << "2. Huevos con frijoles y platanos" << endl << "3. Hot Cakes" << endl << endl << "Respuesta: ";
        cin >> comida;
        cout << endl;
        switch (comida){
            case 1:
            cout << "Su orden es: pupusas";
            break;
            case 2:
            cout << "Su orden es: Huevos con frijojles y platanos";
            break;
            case 3:
            cout << "Su orden es: Hot Cakes";
            break;
        }
        break;

        case 2:
        cout << "Las opciones de almuerzo son las siguientes: " << endl;
        cout << "1. Carne asada" << endl << "2. Sopa de pollo" << endl << "3. Lonja empanizada" << endl << endl << "Respuesta: ";
        cin >> comida2;
        cout << endl;
        switch (comida2){
            case 1:
            cout << "Su orden es: Carne asada";
            break;
            case 2:
            cout << "Su orden es: Sopa de pollo";
            break;
            case 3:
            cout << "Su orden es: Lonja empanizada";
            break;
        }
        break;

        case 3:
        cout << "Las opciones de cena son las siguientes: " << endl;
        cout << "1. Platanos con frijoles molidos" << endl << "2. Sushi" << endl << "3. Pupusas" << endl << endl << "Respuesta: ";
        cin >> comida3;
        cout << endl;
        switch (comida3){
            case 1:
            cout << "Su orden es: Platano con frijoles molidos";
            break;
            case 2:
            cout << "Su orden es: Sushi";
            break;
            case 3:
            cout << "Su orden es: Pupusas";
            break;
        }
        break;

        case 4:
        cout << "Las opciones de postres son las siguientes: " << endl;
        cout << "1. Chessecake" << endl << "2. Tres leches" << endl << "3. Postre de la casa" << endl << endl << "Respuesta: ";
        cin >> comida4;
        cout << endl;
        switch (comida4){
            case 1:
            cout << "Su orden es: Chessecake";
            break;
            case 2:
            cout << "Su orden es: Tres leches";
            break;
            case 3:
            cout << "Su orden es: Postre de la casa";
            break;
        }
        break;

        case 5:
        cout << "Las opciones de antojos son las siguientes: " << endl;
        cout << "1. Alfajores" << endl << "2. Dulce de leche" << endl << "3. Te Chai" << endl << endl << "Respuesta: ";
        cin >> comida5;
        cout << endl;
        switch (comida5){
            case 1:
            cout << "Su orden es: Alfajores";
            break;
            case 2:
            cout << "Su orden es: Dulce de leche";
            break;
            case 3:
            cout << "Su orden es: Te Chai";
            break;
        }
        break;
        
        case 6:
        cout << "Programa finalizado..." << endl;
        break;
    }

    if (eleccion !=1 && eleccion !=2 && eleccion !=3 && eleccion !=4 && eleccion !=5 && eleccion !=6){
        cout << "El valor ingresado es incorrecto" << endl;
        cout << "¿Desea ordenar algo?" << endl;
        cout << "1. Si" << endl << "2. No" << endl << endl << "Respuesta: ";
        cin >> orden;
        cout << endl;
        if (orden == 1){
            goto proceso;
            cout << endl;
        } else {cout << "El programa finalizo...";}
    }
    
    return 0;  
}