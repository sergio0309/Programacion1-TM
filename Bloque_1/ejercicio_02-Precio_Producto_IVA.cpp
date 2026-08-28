/*2. Escribir un programa que de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA.(21%)*/

#include<iostream>

using namespace std;

int main (){

    float precio, iva, total;

    cout<<"Ingresa el precio del prodcuto: ";
    cin>>precio;

    iva = precio * 0.21;
    total = precio + iva;

    cout<<"---------------------\n";
    cout<<"El precio del producto mas el IVA es: \n"<< total;

    return 0;
}