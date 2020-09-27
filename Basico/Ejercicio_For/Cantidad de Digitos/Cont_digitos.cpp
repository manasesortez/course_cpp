#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /**Ejercicio Cantidad de Digitos**/

    /**Escriba un programa que calcule la cantidad
       de digitos que tiene un numero **/
    system("Color 1F");
    cout <<"\n::Cantidad de Digitos::"<< endl <<endl;

    int numero, contador = 0;
    cout <<" \nIngrese un numero: ";
    cin >> numero;

    do{
        numero = numero/10;
        contador++;
    }while(numero != 0);

    cout <<" \nLa cantidad de digitos es: "<< contador<<endl << endl;
    return 0;
}
