#include<iostream>
using namespace std;

//Funcion
int Factorial(int numero){ //5------4 -------- 3 ------ 2----- 1 ---- 0
    if(numero==0) return 1;
    return numero * Factorial(numero - 1);//5*4!---- 4*3! ----- 3*2! ---- 2*1!---- 1*0! 
}

int main(){
    int numero;     
    cout<<"Ingrese el numero que quiere saber el Factorial: ";
    cin>>numero;
    cout<<"El factorial de "<<numero<<"! es "<<Factorial(numero);   //numero = 5
    cout<<"\nFin del codigo..";
    return 0;
}