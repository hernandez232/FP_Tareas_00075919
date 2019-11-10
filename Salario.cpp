#include <iostream>
#include <conio.h>
using namespace std;

float descu1(int salario, float porcentaje){
    float afp;
    afp = salario*porcentaje;
    
    return afp;
}

float descu2(int salario, float porcentaje2){
    float iss;
    iss = salario*porcentaje2;

    return iss;  
}

float descu3(int salario, float porcentaje3){
    float renta;
    renta = salario*porcentaje3;

    return renta;
}

float descu4(int salario, float interes){
    float prestamo;
    prestamo = salario*interes;

    return prestamo;
}

float extra(int he){
    float horaspago;
    horaspago = he*3;

    return horaspago;
}

double vaca(int salario){
    double saldiario, salquince, pagoadicional, vacapago;
    saldiario = salario/30;
    salquince = saldiario*15;
    pagoadicional = salquince*0.3;
    vacapago = salquince + pagoadicional;

    return vacapago;
}

int main (){
    int salario, horas, he, pres;
    float porcentaje = 0.0725, porcentaje2 = 0.03, porcentaje3 = 0.1, interes;
    cout << "Ingrese su salario: ";
    cin >> salario; 
    cout << endl << "¿Ha acomulado horas extras?" << endl;
    cout << "1. Si" << endl << "2. No" << endl;
    cin >> horas;
    cout << endl;
    if (horas == 1){
        cout << "¿Cuantas horas extras ha acomulado?" << endl;
        cin >> he;
        cout << endl;
    }
    cout << "¿Tiene algun prestamo?" << endl;
    cout << "1. Si" << endl << "2. No" << endl;
    cin >> pres;
    cout << endl;
    if (pres == 1){
        cout << "Ingrese la tasa de interes (decimal): ";
        cin >> interes;
        cout << endl;
    }

    if (horas == 1 && pres == 2){
        cout << "Los descuentos de su salario son los siguientes: " << endl;
        cout << "AFP: " << descu1(salario, porcentaje) << endl;
        cout << "ISSS: " << descu2(salario, porcentaje2) << endl;
        cout << "Renta: " << descu3(salario, porcentaje3) << endl;
        cout << "Ganancia por horas extras: " << extra(he) << endl;
        cout << "Devengado vacacion anual: " << vaca(salario) << endl;

    } else if (pres==1 && horas == 2){
        cout << "Los descuentos de su salario son los siguientes: " << endl;
        cout << "AFP: " << descu1(salario, porcentaje) << endl;
        cout << "ISSS: " << descu2(salario, porcentaje2) << endl;
        cout << "Renta: " << descu3(salario, porcentaje3) << endl;
        cout << "Prestamo: " << descu4(salario, interes) << endl;
        cout << "Devengado vacacion anual: " << vaca(salario) << endl;

    } else if (horas ==1 && pres==1){
        cout << "Los descuentos de su salario son los siguientes: " << endl;
        cout << "AFP: " << descu1(salario, porcentaje) << endl;
        cout << "ISSS: " << descu2(salario, porcentaje2) << endl;
        cout << "Renta: " << descu3(salario, porcentaje3) << endl;
        cout << "Prestamo: " << descu4(salario, interes) << endl;
        cout << "Ganancia por horas extras: " << extra(he) << endl;
        cout << "Devengado vacacion anual: " << vaca(salario) << endl;
    } else {
        cout << "Los descuentos de su salario son los siguientes: " << endl;
        cout << "AFP: " << descu1(salario, porcentaje) << endl;
        cout << "ISSS: " << descu2(salario, porcentaje2) << endl;
        cout << "Renta: " << descu3(salario, porcentaje3) << endl;
        cout << "Devengado vacacion anual: " << vaca(salario) << endl;  
    }

    return 0;
}