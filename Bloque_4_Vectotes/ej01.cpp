#include<iostream>
using namespace std;
// Total numero Positivos y/o negativos
int main(){
    const int TAMANIO = 8;
    int numeros[TAMANIO];
    int contadorPositvos = 0, contadorNegativos = 0;
    cout<<"*-------- CONTADOR NUMEROS POSITIVOS/NEGATIVOS --------*";
    for(int i = 0; i<TAMANIO; i++){
        cout<<"\nIngrese un valor: ";
        cin>>numeros[i];
        if(numeros[i] > 0){
            contadorPositvos++;
        } else if( numeros[i] < 0){
            contadorNegativos++;
        }
    }
    cout<<"\nTotal de numero Positivos: "<<contadorPositvos;
    cout<<"\nTotal de numero Negativos: "<<contadorNegativos;
    return 0;
}