//2. Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d) 
#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, result;

    cout<<"Ingrese el valor de 'a': ";
    cin>>a;
    cout<<"Ingrese el valor de 'b': ";
    cin>>b;
    cout<<"Ingrese el valor de 'c': ";
    cin>>c;
    cout<<"Ingrese el valor de 'd': ";
    cin>>d;

    result = (a + b) / (c + d) ;

    cout<<"El resultado es: "<< result;
    return 0;
}