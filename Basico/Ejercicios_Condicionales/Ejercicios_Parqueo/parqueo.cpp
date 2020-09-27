#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");

    /** En un estacionamiento cobran $1.50 por cada hora o fraccion.
    Diseñe un programa que determine cuanto debe pagar un cliente por
    estacionamiento en horas y minutos **/

    int horas, minutos;
    float total;

    cout <<"\n::Ejercio 3::"<< endl << endl;

    cout <<"\nIngrese las Horas: ";
    cin >> horas;
    cout << "\nIngrese los Minutos: ";
    cin >> minutos;

    if(minutos > 0){
        horas = horas+1;
    }

    total = horas*1.50;

    cout <<"\nEl total a pagar es de: "<< total << endl << endl;


    return 0;
}
