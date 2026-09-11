/*8. Escriba un programa que lea de la entrada estándar los dos catetos de un 
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/
#include<iostream>
#include<math.h>

using namespace std;

int main (){

    float cat1, cat2, hipotenusa;

    cout<<"Digite el cateto 1: "; cin>>cat1;
    cout<<"Digite el cateto 2: "; cin>>cat2;

    hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout<<"\nEl resultado de la hipotenusa es: "<< hipotenusa;

    return 0;
}