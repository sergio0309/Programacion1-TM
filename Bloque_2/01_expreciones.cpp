//1. Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>
using namespace std;
int main(){
    float a, b, result;

    cout<<"Ingrese el valor de 'a': ";
    cin>>a;
    cout<<"Ingrese el valor de 'b': ";
    cin>>b;

    result = (a / b) + 1;

    cout<<"El resultado es: "<< result;
    return 0;
}