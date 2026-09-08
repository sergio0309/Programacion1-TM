//3. Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))
#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, e, f, result;

    cout<<"Ingrese el valor de 'a': ";
    cin>>a;
    cout<<"Ingrese el valor de 'b': ";
    cin>>b;
    cout<<"Ingrese el valor de 'c': ";
    cin>>c;
    cout<<"Ingrese el valor de 'd': ";
    cin>>d;
    cout<<"Ingrese el valor de 'e': ";
    cin>>e;
    cout<<"Ingrese el valor de 'f': ";
    cin>>f;

    result = (a+(b/c))/(d+(e/f)) ;

    cout<<"El resultado es: "<< result;
    return 0;
}