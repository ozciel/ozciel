#include <iostream>
/*Solicitar un numero cualquiera mostrar su cuadrado, repetir el proceso hasta que se introduzca un número negativo, entonces se tendría que solicitar el ingreso de un numero valido. */
using namespace std;
int main(int argc, char** argv) 
{

   int numero, cuadrado;
	
do{
       cout<<"\t\t\tIngrese un numero"<<endl;
       cin>>numero;  
	   
       while(numero>0 && numero<10000){
       cuadrado=numero*numero;
       cout<<"/***************El cuadrado del numero ingresado es***************/"<<"\n\t\t\t\t"<<cuadrado<<endl;
       cout<< "\t\t\tIngrese otro numero:"<<endl; 	
	   cin>>numero; 
       }
}while(numero);
 
	return 0;
}
