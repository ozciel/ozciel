#include <iostream>
/*Pedir dos n�meros cualquiera, por ejemplo 15 y 10, mostrar un mensaje que especifique cual es el mayor y cu�l es el menor, adem�s, mostrar el rango de n�meros entre ambos d�gitos, por ejemplo si se proporcionaron los n�meros 15 y 10 el resultado ser�a algo as�:
El n�mero menor es: 10
El n�mero mayor es: 30
El rango de valores es:
10
11
12
13
14
15*/
using namespace std;
int main(int argc, char** argv) 
{
    int num1, num2, i;
	
	do{
	cout<<"Ingrese un numero"<<endl;
	cin>>num1;
	
	cout<<"Ingrese otro numero"<<endl;
	cin>>num2;
    }while(num1 <0 || num1>100000 && num2 <0 || num2>100000);
	
	if(num1>num2){
		cout<<"El numero mayor es:"<<num1<<endl;
	}
	else if(num1<num2){
			cout<<"El numero menor es:"<<num1<<endl;
   }
	
	if(num2>num1){
		cout<<"El numero mayor es:"<<num2<<endl;
	}
	else if(num2<num1){
			cout<<"El numero menor es:"<<num2<<endl;
   }
	
		for(i=num1; i<=num2; i++){
		cout<<"El rango de valores es"<<i<<endl;
	}
     
	return 0;
}
