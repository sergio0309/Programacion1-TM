//4. Comprobar si un número digitado por el usuario es positivo o negativo.
#include<iostream>
using namespace std;

int main (){
    int num1;
    cout<<"Ingrese por teclado el 1er valor: ";
    cin>>num1;
    if(num1 > 0 ){
        cout<<"Es un numero positivo";
    } else if (num1 < 0){
        cout<<"Es un numero negativo";
    }
    else{
        cout<<"Es cero";
    }
    return 0;
}