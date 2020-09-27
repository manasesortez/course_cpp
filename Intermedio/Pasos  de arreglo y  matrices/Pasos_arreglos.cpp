#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#define MAX 100

using namespace std;

void mostrarArreglo(int[],int);
void llenarArreglo(int[],int);

void mostrarMatriz(int[][MAX],int,int);
void llenarMatriz(int[][MAX],int,int);


int main(){
    system("Color 1F");
    int A[5];
    int M[10][MAX];

    llenarArreglo(A,5);
    mostrarArreglo(A,5);

    llenarMatriz(M,2,2);
    mostrarMatriz(M,2,2);
    return 0;
}


void mostrarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


void llenarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<"Elemento "<<i<<":";
        cin>>A[i];
    }
}


void mostrarMatriz(int M[][MAX],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}


void llenarMatriz(int M[][MAX],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Elemento "<<i<<","<<j<<":";
            cin>>M[i][j];
        }
        cout<<endl;
    }
}


