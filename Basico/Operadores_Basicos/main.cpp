#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    system("Color 1F");

    /**Operadores Matematicos**/

    /**
    suma -> +
    Restas -> -
    multiplicacions -> *
    Division -> /
    Modulo -> %
    **/
    cout << "::Operadores matematicos::" << endl << endl <<endl;
    int numero1 = 7;
    int numero2 = 3;
    int cociente = numero1/numero2;
    int mod = numero1 % numero2;

    cout << "Modulo: "<<mod << endl <<endl;
    cout << "Cociente: "<< cociente <<endl <<endl;
    cout << "Suma: "<< 5+5 << endl <<endl;
    cout << "Resta: " << 5-5 << endl <<endl;
    cout << "Multiplicacione: " << 5*5 << endl <<endl <<endl;


    /**Presedencia Aritmetica**/

    /**
    1. - Las Operaciones entre parentesis
    2. - Multiplicaciones, Divisiones y MOdulos
    3. - Suma y Resta
    **/
    cout << "::Precendencia Aritmetica::" << endl << endl <<endl;

    cout <<"Numero 1: "<< 14-8/2*3+1 << endl << endl;
    cout <<"Numero 2: "<< (14-8)/2*3+1 << endl << endl;
    cout <<"Numero 3: "<< 14-(8/2*3)+1 << endl << endl;
    cout <<"Numero 4: "<< 14-8/2*(3+1) << endl << endl;
    cout <<"Numero 5: "<< (14-8)/2*(3+1) << endl  << endl <<endl;

    /**Operadores Logicos**/

    /**

           Y   ->   &&  "SI LOS VALORES SON VERDADEROS"
           O   ->   ||  "SI UNO DE ELLOS ES VERDADERO"
           NO  ->   !

           "Los Bolleanos siempre en consola se imprimiran como:
           TRUE == 1
           FALSE == 0
           "

     Igualdad   ->   ==
     Diferente  ->   !=
        Mentor  ->   <
        Mayor   ->   >
    Menor Igual ->   <=
    Mayor Igual ->   >=
    **/

    cout << "::Operadores Logicos::" << endl << endl <<endl;

    bool r1 = (true&&true)||false; /**TRUE**/
    bool r2 = (5==5) || (6!=2) && !(1==1); /**TRUE**/
    bool r3 = false && true || false; /**FALSE**/
    bool r4 = (5<3) || (3>=3) || true; /**TRUE**/
    bool r5 = ((3<=3) && (5<5) || false); /**FALSE**/

    cout << "Boolean 1:" << r1 << endl << endl;
    cout << "Boolean 2:" << r2 << endl << endl;
    cout << "Boolean 3:" << r3 << endl << endl;
    cout << "Boolean 4:" << r4 << endl << endl;
    cout << "Boolean 5:" << r5 << endl << endl << endl;

    /**Libreria C.math**/

    cout << "::Libreria C.math::" << endl << endl <<endl;

    double potencia = pow(5,5); /**Potencia**/
    double raiz = sqrt(100.0); /**RAIZ Cuadrada**/
    double seno = sin(0.523599); //30
    double coseno = cos(1.0472); //60
    double tangente = tan(0.785398); //45

    cout << "Potencia: "<< potencia << endl << endl;
    cout << "Raiz: "<< raiz << endl << endl;
    cout << "seno: "<< seno << endl << endl;
    cout << "coseno: "<< coseno << endl << endl;
    cout << "tangente: "<< tangente << endl << endl <<endl;


    /**Variables Constantes**/

    cout << "::Variables Constantes::" << endl << endl <<endl;

    const double PI = 3.14159;
    cout << "Constante de PI: " << PI << endl << endl << endl;


    return 0;
}
