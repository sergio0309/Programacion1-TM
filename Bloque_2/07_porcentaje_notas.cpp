/*7.La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa 
que lea las tres notas del alumno y escriba su nota final.*/


#include<iostream>

using namespace std;

int main(){

    float practicas, teoria, part, total;
    cout<<"Ingrese la nota de practicas: ";
    cin>>practicas;
    cout<<"Ingrese la nota de teoria: ";
    cin>>teoria;
    cout<<"Ingrese la nota de participacion: ";
    cin>>part;
    practicas *= 0.30;  // practicas = practicas * 0.30
    teoria *= 0.60;  // practicas = practicas * 0.30
    part *= 0.10;  // practicas = practicas * 0.30

    // total = practicas * 0.30 + teoria * 0.60 + part * 0.10
    total = practicas + teoria + part;

    cout<<"El promedio del estudiante es "<< total << "\n";
    
    return 0;
}