#include<iostream>
#include<time.h>
using namespace std;
//Buscar Mayor y Menor valor en un array
void IniciarArray(int arr[50]){
    for(int i =0; i<50; i++){
        arr[i]= rand()%1000;
    }
}
void MostrarArray(int arr[50]){
    int i = 0;
    while(i<50){
        cout<<"array posicion["<<i<<"]: "<<arr[i]<<"\n";
        i++;
    }
}
int BuscarMayor(int arr[50]){
    int mayor = arr[0];
    for(int i =0; i<50; i++){
        if(arr[i]> mayor){
            mayor= arr[i];
        }
    }
    return mayor;
}
int BuscarMenor(int arr[50]){
    int menor = arr[0];
    for(int i =0; i<50; i++){
        if(arr[i]< menor){
            menor= arr[i];
        }
    }
    return menor;
}
int main(){
    srand(time(NULL));
    int arr[50];
    IniciarArray(arr);
    MostrarArray(arr);
    cout<<"\nEl numero mayor es: "<<BuscarMayor(arr);
    cout<<"\nEl numero menor es: "<<BuscarMenor(arr);
    return 0;
}