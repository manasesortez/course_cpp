#include <iostream>

using namespace std;

int main(){
    /* SECUENCIAS DE ESCAPE
    \n => salto de linea.
    \b => retroceso.
    \t => tabulaciones.
    \r => retorno de carro
    */

    //normal
    cout << "Hello world-EN" << ", Hola Mundo-ES \n" << endl;
    //salto de linea
    cout << "Hello world-EN\n" << "Hola Mundo-ES\n" << endl;
    //retroceso
    cout << "Hello world-EN\b" << "Hola Mundo-ES\n" << endl;
    //retorno de carro
    cout << "Hello world-EN\r" << "Hola Mundo-ES\n" << endl;
    //tabulador
    cout << "Hello world-EN\t\t" << "Hola Mundo-ES\n" << endl;


    return 0;
}
