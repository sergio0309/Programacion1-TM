#include<iostream>
using namespace std;
int obtener_fibonacci(int numero){
    if( numero == 0 ) return 0;
    if( numero == 1 ) return 1;
    int a = 0, b=1, c =0;
    for(int j = 2; j<= numero; j++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
void imprimir_serie(int n){
    for(int i=1; i<= n; i++){
        cout<<obtener_fibonacci(i)<<", ";
    }
}
int main(){
    int numero;
    cout<<"##### SERIE FIBONACI #####";
    cout<<"\nIngresa Limite Serie Fibonacci\n";
    cin>>numero;
    imprimir_serie(numero);
    return 0;
}