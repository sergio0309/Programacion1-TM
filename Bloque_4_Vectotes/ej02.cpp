#include<iostream>
using namespace std;
// Total Gastos de la semana (dias)
int main(){
    const int DIAS = 7;
    double gastos[DIAS];
    double gastoTotal = 0.0;
    cout<<"*------ GASTOS DE SEMANA ------*";
    for(int i=0; i< DIAS; i++){
        cout<<"\nIngrese el gasto del dia ["<<i+1<<"]:";
        cin>>gastos[i];
        gastoTotal += gastos[i]; //gastoTotal = gastoTotal + gastos[i];
    }
    cout<<"\nEl gasto de la semana es de: "<<gastoTotal<<" Bs.";
    return 0;
}