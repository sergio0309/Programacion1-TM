/*1. Escriba un programa que lea dos números y determine cuál de ellos es 
el mayor.*/
#include<iostream>
using namespace std;

int main (){
    float num1, num2;
    cout<<"Ingrese por teclado el 1er valor: ";
    cin>>num1;
    cout<<"Ingrese por teclado el 2do valor: ";
    cin>>num2;

    if(num1 > num2){
        cout<<"EL numero mayor es: "<< num1;
    } else {
        cout<<"EL numero mayor es: "<< num2;
    }
    
    return 0;
}