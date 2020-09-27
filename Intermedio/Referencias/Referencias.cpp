#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){

    /** Referencia
        & -> operador de referencia
     **/

    int var = 100;
    int &referencia = var;

    cout<<"El contenido de var es "<<var<<endl;
    cout<<"La direccion de var es "<<&var<<endl;
    cout<<endl;

    cout<<"El contenido de referencia es "<<referencia<<endl;
    cout<<"La direccion de referencia es "<<&referencia<<endl;

    system("Color 1F");
    return 0;
}
