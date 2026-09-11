/*8. Escribe un programa que lea de la entrada estándar tres números. Después 
debe leer un cuarto número e indicar si el número coincide con alguno de los 
introducidos con anterioridad.*/
#include<iostream>
using namespace std;

int main (){
    float num1, num2, num3, num4;
    cout<<"Ingrese por teclado el 1er valor: ";
    cin>>num1;
    cout<<"Ingrese por teclado el 2do valor: ";
    cin>>num2;
    cout<<"Ingrese por teclado el 3er valor: ";
    cin>>num3;

    cout<<"Cuenta con los numeros "<< num1 << " - " << num2 << " - " << num3;

    cout<<"\n#####################";
    cout<<"Ingrese el numero a comparar: ";
    cin>>num4;
    if( num1 == num4 || num2 == num4 || num3 == num4){
        cout<<"EL numero coincide con uno de los numeros anteiores";
    } else {
        cout<<"EL numero no coincide con ninguno de los anteiores";
    }
    return 0;
}