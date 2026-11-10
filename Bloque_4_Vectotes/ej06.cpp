#include<iostream>
using namespace std;
//Iniciar matriz
void iniciarMatriz(int matriz[5][5]){
    int i=0,j=0,num=0;
    while (i<5)
    {
        while (j<5)
        {
            matriz[i][j] = num +1;
            j++;
            num++;
        }
        i++;
        j=0;
        cout<<"\n";
    }
}
//Mostrar matriz (mostrar en consola)
void mostrarMatriz(int matriz[5][5]){
    int i=0,j=0;
    while (i<5)
    {
        while (j<5)
        {
            cout<<matriz[i][j]<<", ";
            j++;
        }
        i++;
        j=0;
        cout<<"\n";
    }
}
int main(){
    int matriz[5][5];
    iniciarMatriz(matriz);
    mostrarMatriz(matriz);
    return 0;
}