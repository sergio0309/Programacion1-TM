//Un resgitro de estudiantes en un bloc de notas
#include<iostream>      // entrada y salida - < cout - cin>
#include<string>        // Manejo de las cadenas de texto
#include<cstdlib>       // ayuda en comnados de sistea ("cls")
#include<fstream>       //Lectura y escritura de archivos
using namespace std; //evita el prefijo std::

void registrarEstudiante(){
    string nombre, edad, carrera;
    cin.ignore();  //limpia el teclado de usar getline
    cout<<"\n--- REGISTRAR ESTUDIANTE ---\n";
    cout<<"Ingrese Nombre completo: ";
    getline(cin, nombre);
    cout<<"Ingrese Edad: ";
    getline(cin, edad);
    cout<<"Ingrese Carrera: ";
    getline(cin, carrera);

    if(nombre.empty() || edad.empty() || carrera.empty()){
        cout<<"\nError: Todos los campos son obligatorios.\n";
    }

    // Abre (o Crea) un archivo en modo append (ios::app) para agregar al final
    ofstream archivo("estudiantes.txt", ios::app);
    if(archivo.is_open()){
        archivo<<"Nombre: "<<nombre<<" | Edad: "<<edad<<" | Carrera: "<<carrera<<"\n";
        archivo.close();
        cout<<"\nEstudiante resgristrado con exito en 'estudiantes.txt'.\n";
    } else {
        cout<<"\nError: No pudo abrir el archivo para registrar al estudiante\n";
    }
}

void leerEstudiantes(){
    ifstream archivo("estudiantes.txt");    //Abre solo en modo lectura
    string linea;
    cout<<"\n--- LISTA DE ESTUDIANTES REGISTRADOS ---\n";
    if(archivo.is_open()){
        bool hayDatos = false;
        while (getline(archivo, linea))
        {
            cout<< linea<<"\n";
            hayDatos = true;
        }
        archivo.close();
        if(!hayDatos){
            cout<<"El archivo esta vacio.\n";
        }
    } else {
        cout<<"No hay registros guardados aun (el archivo no existe).\n";
    }

}

int main(){
    int opcion;
    do
    {
        cout<<"\n===================================\n";
        cout<<"  SISTEMA DE CONTROL DE ESTUDIANTES  \n";
        cout<<"1. Registrar estudiante.\n";
        cout<<"2. Mostrar registros de estudiantes.\n";
        cout<<"3. Salir.\n";
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            registrarEstudiante();
            break;
        case 2:
            leerEstudiantes();
            break;
        case 3:
            cout<<"Saliendo del programa...\n";
            break;
        default:
            cout<<"Opcion invalida. Intente de nuevo.\n";
            break;
        }
    } while (opcion != 3); // ! =

    return 0;
}