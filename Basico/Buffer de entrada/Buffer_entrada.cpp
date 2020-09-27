#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    system("Color 1F");
    /** BUFFER DE ENTRADA **/

    cout <<"::BUFFER DE ENTRADA::"<< endl << endl;
    char nombre[25];
    int edad;

    cout <<"\nIngresa tu Edad: "<< endl <<endl;
    cin >> edad;
    cin.ignore();
    cin.ignore(256, '\n');

    cout <<"\nIngrese tu nombre: "<< endl << endl;
    cin.getline(nombre, 25);

    cout <<"\nTe Llamas "<<nombre<<" y tu edad es "<< edad << endl <<endl;



    return 0;
}
