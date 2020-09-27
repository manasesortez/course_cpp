#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /** ESTRUCTURA DE DATOS CONDICIONAL**/

    int variable; /**Puede ser Char o Int unicamente**/
    cout << "\nBienvenido Ingrese un Numero: " << endl << endl;
    cin >> variable;
    switch(variable){
        case 1:  cout << "\nFelicidades esta dentro del numero 1" << endl << endl;
            break;

        case 2: cout << "\nFelicidades esta dentro del numero 2" << endl << endl;
            break;

        case 3: cout << "\nFelicidades esta dentro del numero 3" << endl << endl;
            break;

        default: cout <<"\nEl numero que Ingreso no esta en el Sistema" << endl << endl;
    }

    return 0;
}
