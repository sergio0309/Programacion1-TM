#include <iostream>
#define NUM 25
using namespace std;
const int numero = 10;
void ejemplo(){
    //numero = numero + 5;        //Mensaje de Error
    cout<<"\nValor constate global: "<<numero;
}

int main() {
    #define OTRO 2
    const int num1 = 5;
    //num1 = num1 + 2;            //Mensaje de Error
    cout<<"Valor constante local: "<<num1;
    ejemplo();
    cout<<"\nOtro Global-1: "<<NUM;
    //OTRO = OTRO + 5;        //Mensaje de Error
    cout<<"\nOtro Global-2: "<<OTRO;
    return 0;
}