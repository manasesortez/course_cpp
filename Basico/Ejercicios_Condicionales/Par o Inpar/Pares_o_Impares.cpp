#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");

    /**Escribe un programa que diga si el numero
       par o impar**/

       int numero;
       cout <<"\n::Ejercicio 1::"<< endl << endl;

       cout <<"\nIngrese un Numero: "<< endl << endl;
       cin >> numero;

       if(numero % 2 == 0){
            cout << "\nEl numero "<< numero << " es un numero par" << endl << endl;
       }else{
            cout << "\nEl numero "<< numero << " es un numero impar" << endl << endl;

       }

    return 0;
}
