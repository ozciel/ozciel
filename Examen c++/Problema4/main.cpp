#include <iostream>
/*Pedir cinco números y mostrarlos ordenados de mayor a menor, sin embargo, solo se aceptan números pares y no se pueden repetir.*/
using namespace std;
int main(int argc, char** argv) 
{ 

int num1,num2,num3,aux; 
    
    do{
	cout<<"Ingresa 3 numeros"<<endl; 
    cin>>num1>>num2>>num3;
    }while(num1>1==0 % num2>2==0 % num3>2==0);

if(num1<num2) 
{ 
aux=num2; 
num2=num1; 
num1=aux; 
} 


if(num2<num3) 
{ 
aux=num2; 
num2=num3; 
num3=aux; 
} 

if(num1<num2) 
{ 
aux=num1; 
num1=num2; 
num2=aux; 
} 

cout<<"\nLos numeros ordenados de mayor a menor son:"<<num1<<","<<num2<<","<<num3<<endl; 

return 0;
}
