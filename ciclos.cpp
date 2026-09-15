#include<iostream>

using namespace std;

int main(){

    int numero = 8;
    int aux = 0;

    //for(aux; aux<numero; aux++ ){
    /*for(int i = 0; i<10; i++ ){

        cout<<"Numero: "<< i + 1<< "\n";
    }*/

    /*while(aux < numero){
        cout<<"Numero: "<< aux << "\n";
        aux++;
    }*/

    do
    {
        cout<<"Numero: "<< aux << "\n";
        aux++;
    } while (aux < numero);
    
    cout<<"\n\nFin del bucle";
    return 0;
}