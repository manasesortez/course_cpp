#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /**Escribe un programa que lea 3 notas y salga el promedio de la persona**/

    double nota1, nota2, nota3, promedio;
    string nombre;

    cout <<"\n::Ejercicio 3::"<< endl << endl;

    cout << "Ingresa tu nombre: " << endl << endl;
    cin >> nombre;
    cout << "\nIngresa la Nota 1: "<< endl << endl;
    cin >> nota1;
    cout << "\nIngresa la Nota 2: " << endl << endl;
    cin >> nota2;
    cout << "\nIngresa la Nota 3: " << endl << endl;
    cin >> nota3;

    promedio = (nota1+nota2+nota3)/3;

    cout << "\nTu promedio "<< nombre << " es de: " << promedio << endl << endl;

    return 0;
}
