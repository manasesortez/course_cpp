#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
     /** Indireccion
        * -> indireccion -> dentro de la direccion
     **/

    int var = 10*10;
    int *puntero = &var;/** 4 bytes **/
    *puntero = 50;

    cout<<"El valor de var es "<<var<<endl;
    system("Color 1F");
    return 0;
}
