#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#define MAX 100

using namespace std;

int main(){
    system("Color 1F");

    /** Hacer un programa que lea 2 arreglos enteros
    y genere otro con la combinación de ambos arreglos.
     No necesariamente tendrán la misma dimensión.

    Arreglo1    1   2   3   4
    Arreglo2    5   6   7
    Arreglo3    1   2   3   4   5   6   7

    **/
    cout <<"\n::Union de Arreglos::"<<endl <<endl;

    int arreglo1[MAX],arreglo2[MAX],arreglo3[MAX*2];
    int n1,n2,n3,e;

    /**Primer parte Tienes que ingresar el numero de valores
    que quieres que esten en el arreglo**/
    do{
        cout<<"\nIngrese la cantidad de elementos del arreglo 1:";
        cin>>n1;
    }while(n1>MAX || n1<=0);/** mientra n1 sea mayor o n1 menor
                            igual a cero el suiguiente for se ejercutada**/

    /**Este For ejecuta el n1 que el usuario ingreso antes **/
    for(int i=0;i<n1;i++){
        cout<<"\nElemento del indice "<<i<<" :";
        cin>>arreglo1[i];
    }



    /**Segunda parte Tienes que ingresar el numero de valores
    que quieres que esten en el arreglo**/
    do{
        cout<<"\nIngrese la cantidad de elementos del arreglo 2:";
        cin>>n2;
    }while(n2>MAX || n2<=0);/** mientra n2 sea mayor o n1 menor
                            igual a cero el suiguiente for se ejercutada**/

    /**Este For ejecuta el n1 que el usuario ingreso antes **/
    for(int i=0;i<n2;i++){
        cout<<"\nElemento del indice "<<i<<" :";
        cin>>arreglo2[i];
    }



    /**Tercer parte Union de las dos arreglos **/
    cout<<"\nARREGLO FORMADO"<<endl << endl; ;
    e = 0;
    n3 = n1+n2;
    /** El valor "e" encapsula y guarda los valores de arreglo 1 y arreglo 2....
    El valor de n3 guarda los for de n1 y n2 **/
    for(int i=0;i<n1;i++){
        arreglo3[e] = arreglo1[i];
        e++;
    }

    for(int i=0;i<n2;i++){
        arreglo3[e] = arreglo2[i];
        e++;
    }

    /**Al final con todos los valores capturados solo se imprimen
     ::n3 que tiene los 2 for y imprimir arreglo 3 ::**/
    for(int i=0;i<n3;i++){
        cout<<arreglo3[i]<<" ";
    }

    cout <<endl <<endl;

    return 0;
}
