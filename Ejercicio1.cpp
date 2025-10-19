#include <iostream>


/*Escriba un programa que determine si una persona es apta para una oferta de empleo, basada en sus años de experiencia y nivel educativo.
El programa debe solicitar al usuario ingresar los años de experiencia y el nivel educativo (Primaria, Secundaria, Universitaria).
-Si tiene al menos 5 años de experiencia y un nivel universitario, se aprueba la oferta.
-Si tiene entre 3 y 5 años de experiencia y un nivel secundario, se aprueba la oferta.
-Si tiene menos de 3 años de experiencia, no se aprueba la oferta*/

using namespace std;
int main()
{
	int exp, nivel_edu; //Las variables son enteros, ya que se pedirá años cerrados y usará 3 opciones para el nivel educativo sin usar un switch
	
	cout<<"Ingrese cuantos anios de experiencia posee: "<<endl;
	cin>> exp;
	cout<<"------------------------------------------" <<endl;
	
	if(cin.fail()) //Con esta función verifico que ingrese un numero y no otra cosa como una letra o símbolo
	{
		cout<<"ERROR: INGRESE UN VALOR NUMERICO"<<endl;
		return 0; //Aquí usé el return para terminar todo hasta aquí si hay algo mal ingresado. Quise usar el break pero no me permitía
	}
		
	if (exp<3) //Usé directamente esta línea para comprobar que, si primero, no cumple con la experiencia necesaria, el programa termine
	{	
		cout<<"No fue aceptado para este empleo"<<endl;
		return 0;
	}
	//Si se ingresa correctamente un valor numerico y está dentro de la experiencia requerida, continua el programa y pregunta su nivel académico
	cout<<"Ingrese su nivel educativo: "<<endl;
	cout<<"1= Primaria "<<endl;
	cout<<"2= Secundaria "<<endl;
	cout<<"3= Universitario "<<endl;
	cin>> nivel_edu; //Hice que ingresara un número para minimizar errores
	cout<<"------------------------------------------" <<endl;

	if(cin.fail())
	{
		cout<<"ERROR: INGRESE UN VALOR NUMERICO"<<endl;
		return 0;
	}
	
	else if(exp >=3 && nivel_edu==2)
	{
		cout<<"Cumple los requisitos y fue aprobado para el empleo"<<endl;
	}
	else if(exp >5 && nivel_edu==3)
	{
		cout<<"Se ha aprobado su solicitud de empleo "<<endl;
	}
	
	else
	{
		cout<<"No cumple con los requisitos necesarios para el empleo "<<endl; //Si no cumple ningún requisito o escribió algo mal, el programa termina
	}
	
	
	return 0;
	
}
