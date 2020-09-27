#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /** PUNTEROS
        * -> declaracion de puntero
        & -> dirección de ...

        partes de la variable
            nombre y tipo
            contenido
            dirección de memoria
     **/

    int var = 100;
    int *puntero = &var;
    cout<<"\nContenido de var: "<<var<<endl;/** MUESTRO EL CONTENIDO DE LA VARIABLE **/
    cout<<"Direccion de var: "<<&var<<endl;/** MUESTRO LA DIRECCIÓN DE LA VARIABLE  **/
    cout<<endl;
    cout<<"Contenido del puntero: "<<puntero<<endl;
    cout<<"Direccion del puntero: "<<&puntero<<endl;

    system("Color 1F");
    return 0;
}
