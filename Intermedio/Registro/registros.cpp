#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string>

using namespace std;

struct Persona{
    char nombre[30];/** campos **/
    char apellido[30];
    int edad;
};
/**Nota :
   Cuando se usan estructuras y las variables char
   para imprimirla se tiene que usar el getline
   (variable de la estructura. nombre de la variable
   dentro de la estructura, el valor que se le dio)

**/
int main(void){
    system("Color 1F");
    /**Registros**/

    cout <<"\n --------- Registros ----------"<<endl <<endl;

        /** REGISTROS **/
    Persona p;
    cout<<" Ingrese el nombre:";
    cin.getline(p.nombre,30);
    cout<<" Ingrese el apellido:";
    cin.getline(p.apellido,30);
    cout<<" Ingrese la edad:";
    cin>>p.edad;
    cout <<"\n -------------------------------"<<endl;

    cout<<"\n LOS DATOS SON:"<<endl;
    cout<<"\n Nombre :"<<p.nombre<<endl;
    cout<<" Apellido:"<<p.apellido<<endl;
    cout<<" Edad :"<<p.edad<<endl << endl;

    return 0;

    return 0;
}
