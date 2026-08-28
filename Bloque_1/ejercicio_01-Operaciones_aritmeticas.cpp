/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/

#include<iostream>

using namespace std;

int main() {

    float num1, num2, suma, resta, mult, divi;

    cout<<"Ingrese el 1er numero: \n";
    cin>>num1;
    cout<<"Ingrese el 2do numero: \n";
    cin>>num2;

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;

    cout<<"-------------------- \n";
    cout<<"La suma es: "<<suma<<"\n";
    cout<<"La resta es: "<<resta<<"\n";
    cout<<"La multiplicacion es: "<<mult<<"\n";
    cout<<"La division es: "<<divi<<"\n";


    return 0;
}