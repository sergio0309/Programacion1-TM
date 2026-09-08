/*6. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno

0 - 60 => REPROBADO

61 - 80 => APROBADO

81 - 90 => DESTACABLE

91 - 100 => EXCELENCIA
*/

#include<iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, promedio;
    cout<<"Ingrese la 1er nota: ";
    cin>>nota1;
    cout<<"Ingrese la 2do nota: ";
    cin>>nota2;
    cout<<"Ingrese la 3ra nota: ";
    cin>>nota3;
    promedio = (nota1 + nota2 +nota3) /3;
    cout<<"El promedio del estudiante es "<< promedio << "\n";
    if(promedio <= 60 ){
        cout<<"El estudiante reprobo";
    }
    if(promedio >= 61 && promedio <= 80){
        cout<<"El estudiante aprobo";
    }
    if(promedio >= 81 && promedio <= 90){
        cout<<"El estudiante es destacable";
    }
    if(promedio >= 91 && promedio <= 100){
        cout<<"El estudiante es excelente";
    }
    return 0;
}