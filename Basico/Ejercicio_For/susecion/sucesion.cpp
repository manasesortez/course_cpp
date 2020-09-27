#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /**Ejercicio de sucecion. hacer un programa que muetres
    las siguientes suceciones:
    1/2 + 1/3 + 1/4 + 1/5 + 1/(N)..... **/
    system("Color 1F");
    cout <<"\n::Ejercicio Sucesion::"<< endl <<endl;

    int N;

    float suma = 0;

    cout <<"\nIngrese un numero N: ";
    cin >>N;

    for(int i = 2; i <=N; i++){
        suma = suma + 1.0/i;
    }
    cout <<"\nLa suma Total es de: "<< suma <<endl<<endl;

    return 0;
}

