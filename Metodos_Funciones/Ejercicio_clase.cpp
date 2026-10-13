#include<iostream>
using namespace std;
//Suma
float suma(float num1, float num2){
    return num1+num2;
}

//Resta
float resta(float num1, float num2){
    return num1-num2;
}

//Multiplicacion
float multiplicacion(float num1, float num2){
    return num1*num2;
}

//Division
float division(float num1, float num2){
    if(num1== 0 || num2 == 0){
        cout<<"No es posible dividir entre 0";
        return 0;
    }
    return num1/num2;
}

//Factorial
int calcular_factorial(int numero){
    int i = numero - 1;
    if(i == 0) return 1;
    while(i>0){
        numero *= i;
        i--;
    }
    return numero;
}

int mostrar_menu(){
    int opcion;
    cout<<"\n===================================\n";
    cout<<"  SISTEMA DE OPERACIONES MATEMATICAS  \n";
    cout<<"1. Suma.\n";
    cout<<"2. Resta.\n";
    cout<<"3. Multiplicacion.\n";
    cout<<"4. Division.\n";
    cout<<"5. Factorial.\n";
    cout<<"6. Salir.\n";
    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    return opcion;
}

int main(){
    int opc, numero;
    float num1, num2;
    do{
        opc = mostrar_menu();
        switch (opc){
            case 1: 
                cout<<"\nIngresa el 1er numero: ";
                cin>>num1;
                cout<<"\nIngresa el 2do numero: ";
                cin>>num2;
                cout<<"La Suma de los 2 numeros es "<<suma(num1,num2);
                break;
            case 2: 
                cout<<"\nIngresa el 1er numero: ";
                cin>>num1;
                cout<<"\nIngresa el 2do numero: ";
                cin>>num2;
                cout<<"La Resta de los 2 numeros es "<<resta(num1,num2);
                break;
            case 3: 
                cout<<"\nIngresa el 1er numero: ";
                cin>>num1;
                cout<<"\nIngresa el 2do numero: ";
                cin>>num2;
                cout<<"\nLa Multiplicacion de los 2 numeros es "<<multiplicacion(num1,num2);
                break;
            case 4: 
                cout<<"\nIngresa el 1er numero: ";
                cin>>num1;
                cout<<"\nIngresa el 2do numero: ";
                cin>>num2;
                cout<<"\nLa Division de los 2 numeros es "<<division(num1,num2);
                break;
            case 5: 
                cout<<"\nIngresa el numero que quieras saber el factorial: ";
                cin>>numero;
                cout<<"\nEl factorial es: "<<calcular_factorial(numero);
                break;
            
            default:
                cout<<"\nOpcion no valida. Intente de nuevo.";
                break;
        }
    }while(opc != 6);
    
    return 0;
}