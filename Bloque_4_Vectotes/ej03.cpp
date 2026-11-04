#include<iostream>
#include<time.h>
using namespace std;
//Numeros aleatorios en array
int main(){
    srand(time(NULL));
    const int NUMERO = 50;
    int vector[NUMERO];
    //Bucle que asigna valores al arreglo
    for(int i=0; i<NUMERO; i++){
        vector[i] = rand()%100;
    }
    //Bucle que imprimi el valor en consola
    for(int i=0; i<NUMERO; i++){
        cout<<"vector ["<<i<<"] = "<<vector[i]<<"\n";
    }
    return 0;
}