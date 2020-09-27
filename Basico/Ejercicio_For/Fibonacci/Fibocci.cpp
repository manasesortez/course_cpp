#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    /**Ejercicio de Fibonacci**/
    /**Calcule los terminos de l asucecion de Fibonacci el cual
    se calcula asi:
    a1= 0, a2 = 1 an = an-1 + an-2
    Diseñar un programa que calcule el n-esimo termino de la
    sucecion de Fibonacci

               an
           a2
       a1
       0   1   1   2  3  5  9  13  21  34  55........
    **/
    system("Color 1F");
    cout <<"\n::Ejercicio Fibonacci::"<< endl <<endl;

    int N,a1 = 0, a2 = 1, an;
    cout <<"\nIngresa el Valor N: ";
    cin >> N;

    if(N<2){
        cout <<"\nEl e-nesimo termino es: "<<N<<endl;
    }else{
        for(int i = 2; i<=N; i++){
            an = a1 + a2;
            a1 = a2;
            a2 = an;
        }
        cout <<"\nEl e-nesimo termino es: "<<an<<endl;
    }


    return 0;
}

