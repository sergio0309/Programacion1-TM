#include<iostream>
#include<cstdlib>       // ayuda en comnados de sistea ("cls")
using namespace std;

// Metodo un bloque de codigo que no devuelve nada
void saludo(string nombre){
    cout<<"\nHola me llamo "<<nombre<<" y esto es una funcion\n";
    cin.ignore();
}

//Funcion - Bloque de codigo que devuelve un resultado
float Division(float num1, float num2){
    float result=0;
    result= num1/num2;
    return result;
}

int main(){
    string nombre;
    float num1, num2;
    cout<<"Ingrese nombre: ";
    getline(cin, nombre);
    saludo(nombre);
    cout<<"\nIngrese el 1er numero: ";
    cin>>num1;
    cout<<"Ingrese el 2do numero: ";
    cin>>num2;
    cout<<"\nLa divison de "<<num1<<"/"<<num2<<" = "<<Division(num1,num2);
    cout<<"\nFin del codigo";
    return 0;
}