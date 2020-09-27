#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

struct Alumno{
    char nombre[60];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

void llenarAlumnos(Alumno[],int);
void mostrarAlumnos(Alumno[],int);
void ordenarPromedios(Alumno[],int);


int main(){
    system("Color 1F");
    /**Promedio**/
    cout <<"\n ---------- Promedio ----------"<< endl << endl;

    /**
        Escribir un programa que permita ingresar el nombre y 3 notas de N alumnos y
        los almacene en un array de estructura.
        Mostrar los alumnos ingresados incluyendo su promedio ordenado por orden
        de merito.
            **/
    int N = 0;
    Alumno alumnos[60];
    cout <<"\n Ingrese Cantidad de Alumnos: ";
    cin >> N;
    llenarAlumnos(alumnos,N);
    ordenarPromedios(alumnos,N);
    cout<<"\n ORDEN DE MERITO"<<endl;
    mostrarAlumnos(alumnos,N);

    return 0;
}


void llenarAlumnos(Alumno A[],int N){
    for(int i=0;i<N;i++){
        cout<<"\n ALUMNO : "<<i+1<<endl;
        cout<<"\n ---- Nombre: ";
        cin.ignore();
        cin.getline(A[i].nombre,60);
        cout<<" ---- Nota 1: ";
        cin>>A[i].nota1;
        cin.ignore();

        cout<<" ---- Nota 2: ";
        cin>>A[i].nota2;
        cin.ignore();

        cout<<" ---- Nota 3: ";
        cin>>A[i].nota3;
        cin.ignore();

        cout<<endl;
        cout<<"\n -------------------------------------"<<endl;

        A[i].promedio = (A[i].nota1+A[i].nota2+A[i].nota3)/3;
    }
}

void mostrarAlumnos(Alumno A[], int N){
    for(int i=0;i<N;i++){
        cout<<"\n ---- Nombre : "<<A[i].nombre<<endl;
        cout<<"\n -- Promedio : "<<A[i].promedio<<endl;
        cout<<"\n -------------------------------------"<<endl;
        cout<<endl;
    }
}

void ordenarPromedios(Alumno A[],int N){
    /*****
        13  12  10  9
    *******/
    for(int i=1;i<=N;i++){
        for(int j=0;j<N-1;j++){
            if(A[j].promedio<A[j+1].promedio){
                Alumno aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
}

