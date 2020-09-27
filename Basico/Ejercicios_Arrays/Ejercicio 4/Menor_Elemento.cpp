#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
    system("Color 1F");
    /**Menor Elemento**/

    cout <<"\n::Ejercicio 4::"<<endl<<endl;

    /**Lea un arreglo e indique cual es el menor elemento
    y en qué índice se encuentra.

    5   8   6   3   1   0   9
    M
    **/
    int arreglo[10];
    int menor;

    for(int i=0;i<10;i++){
        cout<<"Ingrese el valor de indice "<<i<<" :";
        cin>>arreglo[i];
    }

    menor = 0;
    for(int i=1;i<10;i++){
        if(arreglo[i]<arreglo[menor]){
            menor = i;
        }
    }
    cout<<"\nEl menor elemento es "<<":: "<<arreglo[menor]<<" ::"<<" con el indice "<<menor<<endl;


    return 0;
}
