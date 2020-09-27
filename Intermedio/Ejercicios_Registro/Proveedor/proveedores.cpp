#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string>

using namespace std;

struct Proveedor{
    char nombre[30];
    int cantidadVendida;
    float precioUnitario;
    float importe;
};

void llenarProveedores(Proveedor[],int);
Proveedor buscarMasCaro(Proveedor[],int);
Proveedor buscarMasBarato(Proveedor[],int);
void mostrarProveedor(Proveedor);

int main(void){
    system("Color 1F");
    /**Ejercicio de proveedores**/
    cout <<"\n ------------- Proveedores -------------"<<endl <<endl;

    /**
        Escribir un programa que defina  una tabla de proveedores
        teniendo cada proveedor los siguientes datos: nombre, cantidad vendida, precio unitario
        (introducidos por teclado) e importe (calculado).
        Visualizar los datos de cada proveedor, el importe
        total de compra así como el nombre del proveedor Más
        barato y el del Más caro.
            **/

    Proveedor proveedores[30],masBarato,masCaro;
    int N = 5;
    llenarProveedores(proveedores,N);
    masBarato = buscarMasBarato(proveedores,N);
    masCaro = buscarMasCaro(proveedores,N);
    cout<<"\nPROVEEDOR MAS BARATO"<<endl;
    mostrarProveedor(masBarato);
    cout<<"\nPROVEEDOR MAS CARO"<<endl;
    mostrarProveedor(masCaro);

    return 0;
}

void llenarProveedores(Proveedor A[],int N){
    for(int i=0;i<N;i++){
        cout<<" Proveedor "<<i+1<<endl;
        cout<<"\n ------------ Nombre : ";
        cin.getline(A[i].nombre,30);
        cout<<"\n -- Cantidad vendida : ";
        cin>>A[i].cantidadVendida;
        cin.ignore();
        cout<<"\n --- Precio Unitario : ";
        cin>>A[i].precioUnitario;
        cin.ignore();
        A[i].importe = A[i].precioUnitario*A[i].cantidadVendida;
        cout<<endl;
    }
}

Proveedor buscarMasCaro(Proveedor  A[],int N){
    Proveedor masCaro = A[0];
    for(int i=1;i<N;i++){
        if(A[i].precioUnitario>masCaro.precioUnitario){
            masCaro = A[i];
        }
    }
    return masCaro;
}

Proveedor buscarMasBarato(Proveedor A[],int N){
    Proveedor masBarato = A[0];
    for(int i=1;i<N;i++){
        if(A[i].precioUnitario<masBarato.precioUnitario){
            masBarato = A[i];
        }
    }
    return masBarato;
}

void mostrarProveedor(Proveedor p){
    cout<<"------------Nombre : "<<p.nombre<<endl;
    cout<<"---Precio Unitario : "<<p.precioUnitario<<endl;
    cout<<"--Cantidad vendida : "<<p.cantidadVendida<<endl;
    cout<<"-----------Importe : "<<p.importe<<endl;
}

