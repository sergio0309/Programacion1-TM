#include<iostream>
using namespace std;

void Fibonacci(int num, int num2){
    int i = 1;
    cout<<num<<" ,";    //0
    while (i<15)
    {
        num = num + num2;   //0+1, num=1, 1+0, num=1-- 1+1, num1=2
        cout<<num<<", ";    // 1, 1, 2
        num2= num - num2;   //1-1, num2=0-- 1-0,num2=1
        i++;
    }
}

int main(){
    cout<<"##### SERIE FIBONACI #####";
    cout<<"\nPrimeros 15 numeros de la seria Fibonacci\n";
    Fibonacci(0,1);
    return 0;
}