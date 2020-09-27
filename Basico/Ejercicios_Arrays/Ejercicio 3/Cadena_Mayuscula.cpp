#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
    system("Color 1F");
    /**Lea su nombre en minúscula y muestre por
    consola su nombre escrito en mayúscula. Use la función toupper.
    **/
    cout <<"\n::Cadena Mayuscula::"<<endl<<endl;
    char nombre[30],c;
    int i=0;
    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,30);
    cout <<endl;

    while(nombre[i]){
        c = toupper(nombre[i]);
        i++;
        cout<<"" <<c;
    }

    cout <<"\n";


    return 0;
}
