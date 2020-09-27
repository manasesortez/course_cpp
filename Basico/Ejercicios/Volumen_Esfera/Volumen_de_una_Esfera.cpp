#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /** 2.- Escribir un Programa que nos permita hallar
        el volumen de una esfera**/

    cout << "\nEjercicio 2" << endl << endl;

    const double PI = 3.14159;
    double valumen, Radio;

    cout << "Ingrese el Radio del Circulo: "<< endl << endl;
    cin >> Radio;

    valumen = 4/3*PI*pow(Radio,3);

    cout <<"\nEl volumen de el la esfera es de: "<< valumen << endl << endl;



    return 0;
}
