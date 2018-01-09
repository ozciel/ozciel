#include <iostream>
#include <string>
/*Solicitar el ingreso de 10 calificaciones y el nombre de diez alumnos diferentes (solo el nombre) las notas validadas son de 0 a 10, adicionalmente por cada alumno ingresado se tendrá que mostrar alguno de los siguientes mensajes: "bueno" suponiendo que la calificación este entre 10 y 9, "regular" si la calificación esta entre 8 y 7 y "malo" si la calif. Esta entre 6 y 0, por ejemplo:
Ingrese el nombre del alumno:
Emmanuel
Ingrese su calificación:
8
El alumno es malo
Y se repetiría la secuencia de acciones anterior.
*/
using namespace std;
int main(int argc, char** argv) 
{
	string nombre="", grupo="";
	int calificacion;
	do{
	
        cout<<"Ingresa tu nombre"<<endl;
        cin>>nombre;

        cout<<"Ingresa tu  grupo"<<endl;
        cin>>grupo;	
	do{
	    cout<<"Ingresa tu calificacion"<<endl;
	    cin>>calificacion;
	}while(calificacion <0 || calificacion>10);

	cout<<"\n Bienvenido alumno"":"<< nombre << "\n Eres del grupo"":"<< grupo << "\n tu calificacion es"":"<< calificacion <<endl;
	
	if(calificacion>=9 && calificacion<=10)
	{
		cout<<"\n*****El alumno es excelente*****"<<endl;
	}
	else if(calificacion>=7 && calificacion<=8)
	{
		cout<<"\n*****El alumno es regular*****"<<endl;
	}
	else if(calificacion<=6)
	{
		cout<<"\n*****El alumno es malo*****"<<endl;
	}
	}while(calificacion>=9 && calificacion<=10 || calificacion>=7 && calificacion<=8 || calificacion<=6);
	return 0;
}
