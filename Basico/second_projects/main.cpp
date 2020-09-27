#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("Color 1F");
    /**1**/

    /* TIPOS DE VARIABLES.
    int -> integer -> entero
    char -> character -> caracter
    float -> Float -> Reales
    double -> Double -> Reales
    bool -> boolean -> logicos
    */

    cout << "Tipos de Variables \n\n" << endl;
    //primero
    cout << "Hola Mundo 1" << endl;
    cout << "Hola Mundo 2" << endl;

    //segundo y declaracion de variables
    int var, varx = 30;
    char var2 = 'A';
    float var3;
    double varDoble = 3.1416;
    bool varBool = true;

    //Asignacion de Variables (en programcion el = es Asignacion)
    var = 25;


    //imprecion de variables
    cout << "Tu edad es: " << var << endl;
    cout << var2 << endl;
    cout << varx << endl;
    cout << varDoble << endl << endl << endl;

    /**2**/

    cout << "Notacion Cientifica \n\n" << endl;
    //Notacion Cientifica
    int valor1 = 2e3; /** 3*10^3 **/
    double valor2 = 5.3e3; /** 5.3*10^3 **/
    double valor3 = 1.222e-3; /** 1.22*10^3 **/

    //imprimir valor en NC

    cout << valor1 << endl;
    cout << valor2 <<  endl;
    cout << valor3 << endl <<endl <<endl;

    /**3**/

    /**variable Tipo char**/

    /**
    PESO EN BYTE = 1
    Nª DE VALORRES = 256
    RANGO = -128 a 127
    **/
    //declaracion eh impresion
    cout << "Variables Tipo Char \n " << endl;

    char letra = 65;
    cout << letra <<endl << endl;

    /**4**/

    /**variable Tipo int**/

    /**  PESO EN BYTES* = 4(Puede variar)
         Nº de valores = 2^32 = 4,294,927,296
         Rango = desde -2,147,483,648 a 2,147,483,647

         32 bits
         1 bit -> signo
         31 bits -> valores que puede tomar -> 2^31 -> 2,147,483,647

         "para indicar que un int no lleva enteros se hace de esta forma"
         unsigned -> sin signo
         unsigned int -> 32 bits para los valores
         2^32 -> 4,294,927,296
         RANGO -> 0 hasta 4,294,927,295
    **/

    cout << "Variables Tipo Int \n\n" << endl;

    int numero = -1;
    cout <<numero << endl;

    unsigned int numero2 = -1;
    cout << numero2 << endl <<endl << endl;

    /**5**/

    /** Boolean      Float              Double
    PESO: 1 byte     4 bytes            8 bytes
    RANGO: -     1.17e-38 a 3.40e38     2.22e-308 a 1.80e308

    **/
    cout << "Variables  Boolean   Float   Double \n\n" << endl;

    cout << "Boolean: " << sizeof(bool) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl <<endl <<endl;

    /**6**/
    /** CIN -> Console Input **/

    cout << "Entradas por  Consola \n\n" << endl;

    //comienza con
    int numeroGet;
    cout << "Ingrese un numero" << endl << endl;
    cin >> numeroGet;
    cout << "\nEl numero Ingresado es: " << numeroGet << endl << endl;


    return 0;
}
