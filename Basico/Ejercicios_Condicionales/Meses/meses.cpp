#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");
    /**Contruyes un programa que ingrese un numero
    y le muestre el mes correspondientes al numero
    ingresado**/

    int numero;
    cout << "\n::Ejercicio 4::"<< endl<< endl;

    cout << "Ingrese un Numero de 1 al 12: ";
    cin >> numero;

    switch(numero){
        case 1: cout <<"\nEstamos en Enero"<< endl << endl;
            break;
        case 2: cout <<"\nEstamos en Febrero"<< endl << endl;
            break;
        case 3: cout <<"\nEstamos en Marzo"<< endl << endl;
            break;
        case 4: cout <<"\nEstamos en Abril"<< endl << endl;
            break;
        case 5: cout <<"\nEstamos en Mayo"<< endl << endl;
            break;
        case 6: cout <<"\nEstamos en Junio"<< endl << endl;
            break;
        case 7: cout <<"\nEstamos en Julio"<< endl << endl;
            break;
        case 8: cout <<"\nEstamos en Agosto"<< endl << endl;
            break;
        case 9: cout <<"\nEstamos en Septiembre"<< endl << endl;
            break;
        case 10: cout <<"\nEstamos en Octubre"<< endl << endl;
            break;
        case 11: cout <<"\nEstamos en Novienbre"<< endl << endl;
            break;
        case 12: cout <<"\nEstamos en Diciembre"<< endl << endl;
            break;

        default: cout <<"\nEste Numero no se encuentra en el Sistema"<< endl << endl;
    }

    return 0;
}
