#include <iostream>
using namespace std;

int main (){
    int eleccion, comida, comida2, comida3, comida4, comida5, orden;
    
    cout << "¡Bienvenido!" << endl;
    proceso:
    cout << "Ingrese el numero de la izquierda acorde a la opcion que desea" << endl;
    cout << "1. Desayuno" << endl << "2. Almuerzo" << endl << "3. Cena" << endl << "4. Postres" << endl << "5. Antojos" << endl << "6. Salir" << endl << endl << "Respuesta: ";
    cin >> eleccion;
    cout << endl;

    if (eleccion == 1){
        cout << "Las opciones de desayuno son las siguientes: " << endl;
        cout << "1. Pupusas" << endl << "2. Huevos con frijoles y platanos" << endl << "3. Hot Cakes" << endl << endl << "Respuesta: ";
        cin >> comida;
        cout << endl;
        if (comida == 1){
            cout << "Su orden es: Pupusas";
        } else if (comida == 2){
            cout << "Su orden es: Huevos con frijojles y platanos";
        } else {cout << "Su orden es: Hot Cakes";}

    } else if (eleccion == 2){
        cout << "Las opciones de almuerzo son las siguientes: " << endl;
        cout << "1. Carne asada" << endl << "2. Sopa de pollo" << endl << "3. Lonja empanizada" << endl << endl << "Respuesta: ";
        cin >> comida2;
        cout << endl;
        if (comida2 == 1){
            cout << "Su orden es: Carne asada";
        } else if (comida2 == 2){
            cout << "Su orden es: Sopa de pollo";
        } else {cout << "Su orden es: Lonja empanizada";}

    } else if (eleccion == 3){
        cout << "Las opciones de cena son las siguientes: " << endl;
        cout << "1. Platanos con frijoles molidos" << endl << "2. Sushi" << endl << "3. Pupusas" << endl << endl << "Respuesta: ";
        cin >> comida3;
        cout << endl;
        if (comida3 == 1){
            cout << "Su orden es: Platano con frijoles molidos";
        } else if (comida3 == 2){
            cout << "Su orden es: Sushi";
        } else {cout << "Su orden es: Pupusas";}

    } else if (eleccion == 4){
        cout << "Las opciones de postres son las siguientes: " << endl;
        cout << "1. Chessecake" << endl << "2. Tres leches" << endl << "3. Postre de la casa" << endl << endl << "Respuesta: ";
        cin >> comida4;
        cout << endl;
        if (comida4 == 1){
            cout << "Su orden es: Chessecake";
        } else if (comida4 == 2){
            cout << "Su orden es: Tres leches";
        } else {cout << "Su orden es: Postre de la casa";}
        
    } else if (eleccion == 5){
        cout << "Las opciones de antojos son las siguientes: " << endl;
        cout << "1. Alfajores" << endl << "2. Dulce de leche" << endl << "3. Te Chai" << endl << endl << "Respuesta: ";
        cin >> comida5;
        cout << endl;
        if (comida5 == 1){
            cout << "Su orden es: Alfajores";
        } else if (comida5 == 2){
            cout << "Su orden es: Dulce de leche";
        } else {cout << "Su orden es: Te Chai";}
        
    } else if (eleccion == 6){
        cout << "Programa finalizado..." << endl;
        
    } else if (eleccion !=1 && eleccion !=2 && eleccion !=3 && eleccion !=4 && eleccion !=5 && eleccion !=6){
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