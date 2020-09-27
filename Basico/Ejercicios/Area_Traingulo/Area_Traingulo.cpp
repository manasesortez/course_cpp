#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /** 1.- Escribir un programa que nos permita hallar el
            area de un triangulo **/

    cout << "::Ejercicio 1::"<< endl << endl;

    double base, altura, area;

    cout << "Ingrese la Base del Triangulo: "<< endl << endl;
    cin >> base;
    cout << "\nIngrese la Altura del Triangulo: " << endl << endl;
    cin >> altura;

    area = base*altura/2;

    cout << "\nEl area del triangulo es: " << area << endl << endl;


    return 0;
}
