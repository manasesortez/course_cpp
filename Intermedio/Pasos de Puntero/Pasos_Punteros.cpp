#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void cambiarCien(int*);

int main(){
    system("Color 1F");
    /****  Paso de punteros **/
    int numero = 5;
    cout<<"\nAntes del procedimiento :"<<numero<<endl;
    cambiarCien(&numero);
    cout<<"\nDespues del procedimiento :"<<numero<<endl;

    return 0;
}
/** PASO DE PUNTEROS
    int *a = &numero;
 **/
void cambiarCien(int *a){
    *a = 100;
}


