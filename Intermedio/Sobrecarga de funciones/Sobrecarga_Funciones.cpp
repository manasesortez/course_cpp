#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int suma(int,int);
float suma(float,float);
double suma(double,double);
float suma(int,double);

int main(){
    system("Color 1F");
    /** SOBRECARGA DE FUNCIONES **/
    int a = 10,b=40;
    float c = 40.0,d = 50.0;
    double e = 100.50;
    cout<<suma(a,b)<<endl;
    return 0;

}

int suma(int a,int b){
    return a+b;
}

float suma(float a ,float b){
    return a+b;
}

double suma(double a,double b){
    return a+b;
}

float suma (int a,double b){
    return a+b;
}
