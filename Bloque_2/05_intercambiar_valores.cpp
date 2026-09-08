/*5. Escriba un fragmento de programa que intercambie los valores de dos 
variables.*/
#include<iostream>
using namespace std;

int main(){
    
    int a, b, aux;

    cout<<"Ingrese el primer valor: ";
    cin>>a;
    cout<<"Ingrese el segundo valor: ";
    cin>>b;

    cout<<"\n##########################\n";
    cout<<"Valores "<< a << " y " << b;

    aux = b;
    b = a;
    a = aux;

    cout<<"\n##########################\n";
    cout<<"Valores invertidos"<< a << " y " << b;

    return 0;

}