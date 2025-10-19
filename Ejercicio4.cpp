/*
Escriba un programa que defina un número secreto fijo (por ejemplo, 7), o lo puede ingresar por teclado.
El usuario tiene hasta 5 intentos para adivinar el número.
Por cada intento:
Se incrementa un contador de intentos.
Se compara el número ingresado con el secreto:
Si es igual: se imprime “¡Correcto! Lo lograste en X intentos” y el programa termina.
Si no: Usa un operador ternario para mostrar:
“Demasiado alto” si el número es mayor.
“Demasiado bajo” si es menor.
Si el usuario falla los 5 intentos, el programa muestra: “Lo siento, se agotaron los intentos. El número era X”.
*/

#include <iostream>
using namespace std;

int main()
{
 
	const int numero_sec= 12; //En esta ocasión yo elegí el número secreto
	const int intentos_max= 5; //Utilizo las constantes enteras para que no se puedan cambiar una vez inicie el programa
	int cont = 0; //La variable contador inicia en 0
	int intento; //Intento es el número que ingresa el usuario y sirve para comprobar si ese es el numero secreto
	
	
	cout<<"INTENTA DE ADIVINAR EL NUMERO SECRETO :)"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Ingresa un numero del 1 al 20"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Solo tienes: "<<intentos_max<<" intentos"<<endl;
	cout<<"-----------------------------------------"<<endl;
	
	while (cont < intentos_max ) //El while me permite continuar "x" veces la ejecución del programa hasta que se obtenga un resultado 
	{
		cout<<"Ingresa un numero: ";
		cin>> intento;
		cont++; //Aquí hago que el contador aumente su valor (1 cada vez que se ejecuta el while)
		
		if (intento == numero_sec) //Este if me permite terminar el programa si adivina el numero secreto
		{
			cout<<"FELICIDADES, ADIVINASTE EL NUMERO SECRETO EN SOLO: "<<cont<<" INTENTOS"<<endl;
			return 0;
		} 
		else //Si no lo adivina, seguira el programa pero mostrando pistas para adivinarlo
		{
		cout<<((intento > numero_sec) ? "Demasiado alto" : "Demasiado bajo")<<endl;
		}
	}
	
		cout<<"Lo siento, fallaste todos los intentos. El numero secreto era: "<<numero_sec<<endl; //Si falla los 5 intentos, finaliza todo
	
	return 0;
}