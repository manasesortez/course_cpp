#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

bool sonAmigos(int n1,int n2);
int sumaDivisores(int numero);

int main(){
    system("Color 1F");
    /** Escriba una funcion que diga si dos números son amigos.
    Dos numeros son amigos si cada uno de ellos es igual a la suma de
    los divisores del otro.
    284: 1 + 2 + 4 + 71 + 142 = 220
    220: 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284

    Identificar si dos numeros son amigos
        necesitamos la suma de divisores
    **/
    if(sonAmigos(284,220)){
        cout<<"Son amigos"<<endl;
    }
    else{
        cout<<"NO son amigos"<<endl;
    }
    return 0;
}

bool sonAmigos(int n1,int n2){
    if(sumaDivisores(n1) == n2 && sumaDivisores(n2)==n1){
        return true;
    }
    else{
        return false;
    }
}

int sumaDivisores(int numero){
    /** 10 -> 1 2 3 4 5 6 7 8 9 **/
    int acumulador = 0;
    for(int i=1;i<=numero/2;i++){
        if(numero%i==0){
            acumulador = acumulador + i;
        }
    }
    return acumulador;
}

