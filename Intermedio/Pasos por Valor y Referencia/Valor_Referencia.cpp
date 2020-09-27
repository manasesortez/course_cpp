#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void cambiarCien(int&);

int main(){
    system("Color 1F");

    /****  Paso por valor y por referencia **/

    int numero = 5;
    cout<<"Antes del procedimiento :"<<numero<<endl;
    cambiarCien(numero);
    cout<<"Despues del procedimiento :"<<numero<<endl;

    return 0;
}

/**  PASO POR VALOR
    Paso unicamente EL VALOR de la variable
    ----
    int a = numero;
    PASO POR REFERENCIA
    Paso LA REFERENCIA de una variable
    ----
    int &a = numero;
 **/
void cambiarCien(int &a){
    a = 100;
}


