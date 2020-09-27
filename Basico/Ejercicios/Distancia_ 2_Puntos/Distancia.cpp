#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){

    system("Color 1F");

    /**5.- Calcular la Distancia entre 2 puntos (Punto 1, Punto 2)
       Localizado en un plano XY.
       formula = raiz((x2 - x1)^ 2 + (x2 - x1)^2)**/

    cout << "\n::Ejercicio 5::"<< endl << endl;

    double formula, x1, x2, y1, y2;

    cout << "Ingrese Punto 1" << endl << endl;
    cout << "X: ";
    cin >> x1;
    cout << "\nY: ";
    cin >> y1;

    cout << "\nIngrese Punto 2" << endl << endl;
    cout << "X: ";
    cin >> x2;
    cout << "\nY: ";
    cin >> y2;

    formula = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    cout << "\nLa distancia es: " << formula << endl << endl;


    return 0;
}
