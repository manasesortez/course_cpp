#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");
    /** Cadena de Texto **/

    char cadena1[] = "Manases Ortez";
    char cadena2[] = {'a','e', 'i', 'o', 'u', 'A','E','I','O','U'};
    char cadena3[30];

    cout <<"\n::Cadenas de Texto::"<<endl << endl;

    cout << "Hola Mundo! " <<cadena1<<endl<<endl;
    cout << 'A'<< endl;


    cout << "\nIngrese una Cadena de 10 char: " << endl << endl;
    cin.getline(cadena3, 30);
    cout << "";
    cout <<"\nLa Cadena es: "<< cadena3 << endl<< endl;

}
