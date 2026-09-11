/*7. Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25].*/
#include<iostream>
using namespace std;

int main (){
    int edad;
    cout<<"Ingrese el caracter: ";
    cin>> edad;
    if( edad >= 18 && edad <= 25  ){
       cout<<"La edad esta dentro el rango de edad";
    } 
    else {
       cout<<"No es una vocal";
    }
    return 0;
}