#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /**Ejercicio de Triangulos**/
    /**Realize un Programa que relize un triangulo
    con algun caracter y ingresando por la consola
    un valor n, siendo n la base y altura del triangulo**/
    system("Color 1F");
    cout <<"\n::Ejercicio de Triangulo::"<< endl <<endl;

    int n;
    cout << "\nIngrese el valor de N: ";
    cin >> n;

    for(int i=1; i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

