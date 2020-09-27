#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
    system("Color 1F");

    /**Ingrese el sueldo de un trabajador, categorizandolo con
    condicion estabel(E) o no Estable (N) y reportar el paso total
    que se debe hacer de acuerdo a lo siguiente.
    El porcentaje a la siguiente tabla:

           CATEGORIA         ESTABLE         NO ESTABLE
              A                20%               17%
              B                18%               15%
              C                15%               14%
              D                12%               10%

    El calculo del descuento es con respecto al sueldo + bonificacion siendo:

           Estable: 6%        No Estable: 4%

    **/
    cout << "\n::Ejercicio 6::"<< endl << endl;
    float sueldo;
    char categoria, condicion;
    cout <<"\nIngrese su Categoria: ";
    cin >> categoria;
    cout <<"\nIngrese la Condicion: ";
    cin >> condicion;
    cout <<"\n::::Ingrese su sueldo::::"<< endl << endl;
    cin >> sueldo;

    if(condicion == 'E' || condicion == 'e'){
        switch(categoria){

            case 'A' : sueldo = sueldo * 1.20;
                break;
            case 'a' : sueldo = sueldo * 1.20;
                break;

            case 'B' : sueldo = sueldo * 1.18;
                break;
            case 'b' : sueldo = sueldo * 1.18;
                break;

            case 'C' : sueldo = sueldo * 1.15;
                break;
            case 'c' : sueldo = sueldo * 1.15;
                break;

            case 'D' : sueldo = sueldo * 1.12;
                break;
            case 'd' : sueldo = sueldo * 1.12;
                break;
        }
        sueldo = sueldo*0.94;

    }else if (condicion == 'N' || condicion == 'n'){

        switch(categoria){

            case 'A' : sueldo = sueldo * 1.17;
                break;
            case 'a' : sueldo = sueldo * 1.17;
                break;

            case 'B' : sueldo = sueldo * 1.15;
                break;
            case 'b' : sueldo = sueldo * 1.15;
                break;

            case 'C' : sueldo = sueldo * 1.14;
                break;
            case 'c' : sueldo = sueldo * 1.14;
                break;

            case 'D' : sueldo = sueldo * 1.10;
                break;
            case 'd' : sueldo = sueldo * 1.10;
                break;
        }

        sueldo = sueldo*0.96;

    }

    cout <<"\nSu Sueldo Final es: "<< sueldo << endl << endl;


    return 0;
}
