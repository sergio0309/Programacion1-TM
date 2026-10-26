#include<iostream>
using namespace std;

int main(){         //0 1 2 3 4  5  6
    int vectores[] = {5,8,4,77,33,7, 1};
    int i = 0, dato=0, j=0;
    while(i <= 7){
        cout<<"Vector - Posicion["<<i<<"]: "<<vectores[i]<<"\n";
        i++;
    }
    cout<<"Ingrese el datos a ver: ";
    cin>>dato;
    while (j<= 7)
    {
        if(dato == vectores[j]){
            cout<<"Valor - Posicion["<<j<<"]: "<<vectores[j]<<"\n";
            return 0;
        }
        j++;
    }
    cout<<"Valor no encostrado";
    return 0;
}