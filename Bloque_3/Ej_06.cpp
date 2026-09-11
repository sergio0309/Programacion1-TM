/*6. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula, es una vocal 
mayúscula o no es una vocal.*/
#include<iostream>
using namespace std;

int main (){
    string vocal;
    cout<<"Ingrese el caracter: ";
    cin>> vocal;
    if( vocal == "a" || vocal == "e" || vocal == "i" || vocal == "o" ||vocal == "u" ){
       cout<<"Es una vocal minuscula";
    } 
    else if (vocal == "A" || vocal == "E" || vocal == "I" || vocal == "O" ||vocal == "U")
    {
        cout<<"Es una vocal MAYUSCULA";
    }
    else {
       cout<<"No es una vocal";
    }
    return 0;
}