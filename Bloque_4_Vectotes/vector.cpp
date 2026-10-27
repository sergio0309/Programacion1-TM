#include<iostream>
using namespace std;
int main(){         // 0 1 2 3  4  5  6
    int vectores[] = {5,8,4,77,33,7, 1};
    int i = 0, dato = 0, j=0;
    while(i<7){
        cout<<"Vector-Posicion["<<i<<"] = "<<vectores[i]<<"\n";
        i++;
    }
    cout<<"\n*------ Buscar en el arreglo ------*\n";
    cout<<"Ingrese el numero a buscar en el arreglo {5,8,4,77,33,7, 1}: ";
    cin>>dato;
    while (j<7)
    {
        if(dato == vectores[j]){
            cout<<"\nEl valor "<<dato<<" se encuentra en la posicion ["<<j<<"]";
            return 0;
        }
        j++;
    }
    cout<<"\nEl valor "<<dato<<" no se encuentra en el arreglo";
    return 0;
}