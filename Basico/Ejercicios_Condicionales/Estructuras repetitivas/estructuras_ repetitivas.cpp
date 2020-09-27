#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){
    system("Color 1F");
    /** Estructuras repitivas

    1.- while -> Mientras
    2.- Do while -> Hacer Mientras **/

    cout <<"\n::Estructuras repetitivas::" << endl << endl;

    int numero = 5;
    /** Pre - Condicional **/
    while(numero == 5){
        cout << "\nBienvenido al Ciclo While" << endl  << endl;
    }

    /** Post - Condicional **/
    do{
        cout << "\nBienvenido al Ciclo Do While" << endl  << endl;

    }while(numero == 6);


    return 0;
}
