#include <iostream>
using namespace std;

void ejemplo(){
    int numero1 = 10;
    cout<<"Funcion ejemplo: "<<numero1<<"\n";
}
int main() {
    int numero = 20;
    bool estado = true;
    cout<<"Funcion main: "<<numero<<"\n";
    numero = numero + 5;
    ejemplo();
    if(estado){
        int aux = 5;
        cout<<"\n Dentro del if - valor: "<<aux<<"\n";
    }else{
        //cout<<"\n Dentro del if - valor: "<<aux<<"\n";  //Error
    }
    //cout<<aux;      //Mensaje de Error
    return 0;
}