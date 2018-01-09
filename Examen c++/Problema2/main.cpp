#include <iostream>
/* Pedir un número entero, pero solo se aceptan numero no pares, una ves que se ha capturado el número se tendré que mostrar un mensaje donde se indique si es positivo o negativo. */
using namespace std;
int main(int argc, char** argv) 
{
	int numero;
	
	do{
	cout<<"Ingrese un numero entero"<<endl;
	cin>>numero;
	}while(numero<0 && numero>0);
  
    if(numero>0){
    	cout<<"Es positivo"<<endl;
	}
     else{
     	cout<<"Es negativo"<<endl;
	 }
	return 0;
}
