#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");

    /**Crear Programa que le ingreses una letra
    y detecte si es una vocal o no**/

    cout <<"\n::Ejercio 5::"<< endl << endl;
    char letra;
    cout << "Ingresa una letra: ";
    cin >> letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout << "\nEsta si es un vocal" << endl << endl;
            break;
        default : cout << "\n Esta no es una Vocal"<< endl << endl;
    }

    return 0;
}
