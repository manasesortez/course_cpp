#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void invertir (int[],int);
void mostrarArreglo(int[],int);

int main(){
    system("Color 1F");
    /** Cree una funcion que permita  invertir los elementos de un arreglo **/
    int arreglo[]={9,0,1,8};
    mostrarArreglo(arreglo,4);
    invertir(arreglo,4);
    mostrarArreglo(arreglo,4);
    return 0;
}

void invertir (int A[],int N){
    /***
        9,0,5,1,8 -> 8 1 5 0 9
        0 1 2 3 4
        9 0 1 8   -> 8 1 0 9
    *****/
    for(int i=0;i<N/2;i++){
        int aux =  A[i];
        A[i] = A[N-1-i];
        /**
            0   3
            1   2
        **/
        A[N-1-i] = aux;
    }
}

void mostrarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

