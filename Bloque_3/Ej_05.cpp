/*5. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula o no.*/
#include<iostream>
using namespace std;

int main (){
    string vocal;
    cout<<"Ingrese el caracter: ";
    cin>> vocal;
    if( vocal == "a" || vocal == "e" || vocal == "i" || vocal == "o" ||vocal == "u"){
       cout<<"Es una vocal minuscula";
    } else {
       cout<<"No cumple con las condiciones";
    }
    return 0;
}