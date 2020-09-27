#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");

    /**Crear un programa que puede ingresar cualquier numero
       y corroborrar si ese numero es positivo, negativo o
       neutro**/

       double numero;
       cout << "\nIngrese un Numero: ";
       cin >> numero;

       if(numero > 0){

            cout << "\nEl numero " << numero << " es Positivo." << endl << endl;

       }else if(numero == 0){

           cout << "\nEl numero " << numero << " es Neutro." << endl << endl;

       }else{

           cout << "\nEl numero "<< numero << " es Negativo." << endl << endl;

       }


    return 0;
}
