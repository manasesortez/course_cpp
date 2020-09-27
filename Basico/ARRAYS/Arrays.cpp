#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");
    /**Tema Arrays en C++**/

    int arreglo1[10];
    int arreglo2[] = {1,2,3,4,5};

    cout <<"\n :: Tema Arrays C++ ::"<<endl <<endl;

    for(int i = 0; i < 10; i++){
        cout<<"Indice"<<i<<": " << endl;
        cin >> arreglo1[i];
        cout << "" << endl;
    }


    for(int i = 0; i < 10; i++){
        cout << "  ";
        cout << arreglo1[i] <<" ";
    }

    cout <<""<<endl<<endl;

    /**PRIMER ARREGLO
    cout <<"El primer Arreglo es: "<< arreglo2[0] <<endl <<endl;
    **/
    /**ULTIMO ARREGLO
    cout <<"El ultimo Arreglo es: "<<arreglo2[4]<< endl << endl;
    **/

    return 0;
}
