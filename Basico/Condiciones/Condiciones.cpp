#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");
    /**ESTRUCTURA CONDICIONAL SIMPLE**/
    /**
    if -> si
    else -> si no
    **/
    cout << "\n::Estructura condicional::"<< endl << endl;

    double numeroA, numeroB;

    cout <<"\nIngrese un numero A"<< endl << endl;
    cin >> numeroA;
    cout << "\nIngrese un numero B" << endl << endl;
    cin >> numeroB;


    if(numeroA >= numeroB){

        cout <<"\nEl Mayor es el Numero A"<< endl << endl;

    }else{

        cout <<"\nEl Mayor es el Numero B"<< endl << endl;

    }


    return 0;
}
