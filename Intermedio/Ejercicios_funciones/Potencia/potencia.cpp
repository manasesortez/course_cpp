#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int potencia(int valor,int exponente);

int main(){
    system("Color 1F");

    /** Escriba una funcion que calcule
    la potencia de un numero
        valor -> exponente
            2   ^ 3 = 8
     **/


    cout<<potencia(7,7)<<endl;
    return 0;
}

int potencia(int valor,int exponente){
    /** 2 ^ 3 = 2*2*2    **/
    int acumulador = 1;
    for(int i=1;i<=exponente;i++){
        acumulador=acumulador*valor;
    }
    return acumulador;
}

