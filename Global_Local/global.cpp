
#include <iostream>
using namespace std;
int numero = 50;    //variable global
void ejemplo(){
    cout<<"Funcion ejemplo: "<<numero<<"\n";
}
int main() {
    cout<<"Funcion main: "<<numero<<"\n";
    numero = numero + 5;
    ejemplo();
    return 0;
}