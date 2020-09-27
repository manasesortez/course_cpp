#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /**Ejecicio Suma**/
    /**Realize un Programa que lea varios valores hasta
       ingresar un valor negativ. luego muestre la suma
       esto.**/
    system("Color 1F");
    cout <<"\n::Ejercicios Suma::"<< endl <<endl;

    float numero, suma = 0;
    do{
        cout <<"\nIngrese un Numero: ";
        cin >> numero;
        if(numero >= 0){
           suma = suma+numero;
        }
    }while (numero >= 0);
    cout <<"\nSu valor Total es: "<<suma<< endl <<endl;



    return 0;
}

