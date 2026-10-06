#include<iostream>
using namespace std;

//Metodo
int Factorial(int numero){ //5
    int i = numero - 1;     //4
    if(numero==0) return 1;
    while (i > 0)
    {
        numero = numero * i;
        i--;
    }
    return numero;
}

int main(){
    int numero;     
    cout<<"Ingrese el numero que quiere saber el Factorial: ";
    cin>>numero;
    cout<<"El factorial de "<<numero<<"! es "<<Factorial(numero);      //5
    cout<<"\nFin del codigo..";
    return 0;
}