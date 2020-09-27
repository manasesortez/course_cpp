#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

/** PROTOTIPO **/
void mensaje();
int suma(int a,int b);
bool esPar(int);

int main(){
    system("Color 1F");

    /**Mensaje**/
    cout<<"\n";
    mensaje();

    double contador;

    cout<<"\nIngrese un Numero: ";
    cin >> contador;

    /** Funciones y procedimientos**/
    cout<<"\n";

    if(esPar(contador)){
        cout<<"El numero es par"<<endl;
    }
    else{
        cout<<"El numero no es par"<<endl;
    }

    /**suma**/
    cout<<"\n";
    int FunSuma = suma(5, 2);
    cout <<"La suma es: " << FunSuma<<endl;
    return 0;
}

void mensaje(){
    cout<<"Mensaje dentro de un procedimiento"<<endl;
}

int suma(int a,int b){
    int c = a+b;
    return c;
}

bool esPar(int a){
    if(a%2==0){
        return true;
    }
    else{
        return false;
    }
}
