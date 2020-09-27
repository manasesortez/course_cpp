#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /**Construya un Aplicacion que convierta la temperatura
       en grados Celcius a Fahrenheint (C = 5(F-32)/9)
       y Kelvin (C = K - 127.15)**/

    cout << "\n::Ejercicio 4::"<< endl << endl;

    double celcius, fahrenheint, kelvin;

    cout << "Ingrese la Temperatura en Celcius: " << endl << endl;
    cin >> celcius;

    fahrenheint = ((celcius * 9)/5)+32;
    kelvin = (celcius + 273.15);

    cout << "\n" <<celcius <<" Grados celcius en fahrenheint son: "<< fahrenheint << endl << endl;

    cout << "\n" <<celcius <<" Grados celcius en kelvin son: "<< kelvin << endl << endl;


    return 0;
}
