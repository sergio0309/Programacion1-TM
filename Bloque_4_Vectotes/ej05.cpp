#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //string nombre = "Juan Pablo";
    string nombre;
    cout<<"Ingrese nombre completo: ";
    //cin>>nombre;
    getline(cin,nombre);
    for(int i=0; i<nombre.size();i++){
        cout<<nombre[i]<<" ";
    }
    //UNIR STRING
    char a[] = "Hola, me llamo ";
    char b[] = "Willson Flores";
    strcat(a,b);
    cout<<"\n"<<a;
    //Comparar
    char c[] = "programacion";
    char d[] = "programacion1";
    if(strcmp(c,d) == 0){
        cout<<"\nLas cadenas son iguales.";
        return 0;
    } else {
        cout<<"\nLas cadenas no son iguales.";
    }
    //Copiar cadenas
    char e[] = "Hola desde C++";
    char f[] = "programacion1";
    strcpy(e,f);
    cout<<"\n"<<e;
    //Inverir cadena
    cout<<"\nCadena invertida: "<<e<<" ! = "<<strrev(e);
    //Unir string
    string name = "Jose ";
    string apellido = "Ramos";
    name.append(apellido);
    cout<<"\nNombre completo: "<<name;
    //MAYUSCULAS
    cout<<"\nMAYUSCULAS: ";
    for(int i=0; i<name.size();i++){
        name[i] = toupper(name[i]);
    }
    cout<<name;
    //minusculas;
    cout<<"\nminuscular: ";
    for(int i=0; i<name.size();i++){
        name[i] = tolower(name[i]);
    }
    cout<<name;
    cout<<"\nFin del codigo";
    return 0;
}