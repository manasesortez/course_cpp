#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");
    cout << "\n::Contadores y Acumuladores::"<<endl<<endl;

    /**Contadores y Acumuladores**/

    int contador = 0, acumuladores = 0;

    while(contador <= 10){
        cout <<contador<< endl;
        contador++;
        acumuladores = acumuladores + contador;
        /**
              CONTADOR          ACUMULADOR
                 0                  0
                 1                  1
                 2                  3
                 3                  6
                 4                  10
                 5                  15
                 6                  21
                 7                  28
                 8                  36
                 9                  45
                 10                 55
                 11                 66
        **/

    }

    cout <<"\nEl Contador es: "<< contador << endl<< endl;
    cout <<"\nEl valor del Acumulador es: "<<acumuladores<< endl <<endl;
    return 0;
}
