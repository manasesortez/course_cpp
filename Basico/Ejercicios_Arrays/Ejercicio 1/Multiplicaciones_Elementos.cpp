#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
#define MAX 5


using namespace std;

int main(){
    system("Color 1F");
    /**Multiplicacion de Elementos**/

    cout <<"\n::Ejercicio 1::"<< endl<<endl;

    /**Haga un programa que lea 2 arreglos unidimensionales con los valores reales
    y usando otro arreglo calcule la multiplicacion de los valores
    de ambos arreglos

    1   2   3
    4   5   6
    4   10  10
    **/

    int arreglo1[MAX];
    int arreglo2[MAX];
    int arreglo3[MAX];

    /**arreglo 1**/
    cout <<"\nArreglo 1 "<<endl<< endl;

    for(int i = 0; i < MAX; i++){
            cout <<"Indice "<<i<<" : ";
            cin >> arreglo1[i];
    }

    /**arreglo 2**/
    cout <<"\nArreglo 2 "<<endl<< endl;

    for(int i = 0; i < MAX; i++){
            cout <<"Indice "<<i<<" : ";
            cin >> arreglo2[i];
    }

    /**arreglo 3**/
    cout <<"\nArreglo Resultante "<<endl << endl;

    for(int i = 0; i < MAX; i++){
            arreglo3[i] = arreglo2[i] * arreglo1[i];
    }


    for(int i = 0; i < MAX; i++){
            cout <<arreglo3[i] <<" ";
    }

    cout <<"\n "<<endl;
    return 0;
}
