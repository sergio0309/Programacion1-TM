/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>

using namespace std;

int main(){

	int edad;		// Numeros entero (1, 2, 3, ...)
	char sexo;		// char ("a", "b", "M", ...)
	float altura;	// numeros flotantes (1.5 , 52.36, ...)

	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su sexo: ";
	cin>>sexo;
	cout<<"Ingrese su altura: ";
	cin>>altura;

	cout<<"-------------------\n";
	cout<<"La edad: "<< edad <<"\n";
	cout<<"El sexo: "<< sexo<<"\n";
	cout<<"La altura: "<< altura <<"\n";
	return 0;
}