/*2. Escriba un programa que lea tres números y determine cuál de ellos es 
el mayor.*/

#include<iostream>
using namespace std;

int main (){
    float num1, num2, num3;
    cout<<"Ingrese por teclado el 1er valor: ";
    cin>>num1;
    cout<<"Ingrese por teclado el 2do valor: ";
    cin>>num2;
    cout<<"Ingrese por teclado el 3er valor: ";
    cin>>num3;

    if(num1 > num2 && num1 > num3){
        cout<<"EL numero mayor es: "<< num1;
    }

    else if (num2 > num1 && num2 > num3)
    {
        cout<<"EL numero mayor es: "<< num2;
    }

    else {
        cout<<"EL numero mayor es: "<< num3;
    }
    
    return 0;
}
