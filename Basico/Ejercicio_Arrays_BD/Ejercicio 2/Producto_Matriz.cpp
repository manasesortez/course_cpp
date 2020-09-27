#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    system("Color 1F");
    cout <<"\n::Ejercicio 2::"<<endl<<endl;

    /** Escriba un programa que pida dos matrices de NxN
     y luego genere otra matriz con el producto de estas.

        a   b       e   f      a*e+b*g  a*f+b*h
        c   d       g   h      c*e+d*g  c*f+g*h

    **/
    int A[][3] = { {1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int B[][3] = { {5,6,7},
                   {2,1,3},
                   {2,3,1}};
    int C[3][3];/** 15  17  16
                    42  47  49
                    69  77  82**/
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = 0;
            for(int k=0;k<3;k++){
                C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
            }
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

