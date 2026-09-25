#include<iostream>

using namespace std;

int main(){
    int suma=0, resta=0, mult=0, div=0;
    int num1 = 10, num2 = 2;

    suma = num1+num2;
    cout<<"\nSuma\n";
    cout<<"\nPrimera forma\n";
    cout<<"Suma de "<<num1<<" + "<<num2<<" = "<<suma;
    cout<<"\nSegunda forma\n";
    cout<<"Suma de "<<num1<<" + "<<num2<<" = "<<num1 + num2;
    suma+= num2;// suma = suma + num2
    cout<<"\nTotal: "<< suma;

    resta = num1-num2;
    cout<<"\nResta\n";
    cout<<"\nPrimera forma\n";
    cout<<"Resta de "<<num1<<" - "<<num2<<" = "<<resta;
    cout<<"\nSegunda forma\n";
    cout<<"Resta de "<<num1<<" - "<<num2<<" = "<<num1 - num2;
    resta-= num2;// resta = resta + num2
    cout<<"\nTotal: "<< resta;

    mult = num1*num2;
    cout<<"\nMultiplicacion\n";
    cout<<"\nPrimera forma\n";
    cout<<"Multiplicacion de "<<num1<<" x "<<num2<<" = "<<mult;
    cout<<"\nSegunda forma\n";
    cout<<"Multiplicacion de "<<num1<<" x "<<num2<<" = "<<num1 * num2;

    div = num1/num2;
    cout<<"\nDivision\n";
    cout<<"\nPrimera forma\n";
    cout<<"Division de "<<num1<<" / "<<num2<<" = "<<div;
    cout<<"\nSegunda forma\n";
    cout<<"Division de "<<num1<<" / "<<num2<<" = "<<num1 / num2;

    return 0;
}