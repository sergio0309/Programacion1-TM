#include <iostream>
using namespace std;

int contador(){
    static int sumatoria = 0;
    //int sumatoria = 0;
    sumatoria += 1;     //sumatoria = sumatoria ++
    return sumatoria;
}

int main() {
    cout<<contador()<<"\n";
    cout<<contador()<<"\n";
    cout<<contador()<<"\n";
    cout<<contador()<<"\n";
    cout<<"MENSAJE\n";
    cout<<contador()<<"\n";
    return 0;
}