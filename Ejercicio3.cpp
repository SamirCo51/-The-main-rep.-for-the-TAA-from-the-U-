/*Solicite al usuario una temperatura en grados Celsius (permitir decimales).
Verifica si la temperatura es válida (debe estar entre -100 y 100). Si no lo es, muestra un mensaje de error.
Convierte la temperatura a grados Fahrenheit con la fórmula: F = C * 9 / 5 + 32;
Clasifica la temperatura en Celsius usando operador ternario anidado:
Menor a 0 °C: “Muy fría”
Entre 0 °C y 15 °C: “Fría”
Entre 15 °C y 30 °C: “Templada”
Mayor a 30 °C: “Caliente”
Además, solicita una temperatura umbral de comparación, y usa expresiones lógicas y relacionales para determinar:
¿Es mayor que el umbral?
¿Es múltiplo de 5? o “No es múltiplo de 5”. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float temp_c, temp_f, umbral; //Usare simplemente 3 variables para la ejecucion
	
	cout<<"Ingrese una temperatura en GRADOS CELSIUS: "<<endl;
	cin>>temp_c; //En esta variable se almacena la temperatura en grados celsius y la usaremos mas tarde 
		
	if (temp_c < -100 || temp_c > 100) //Usaremos este if para encapsular la condicion de que la temperatura debe estar entre los -100 y 100 grados celsius
	{
		cout<<"ERROR : Ingrese una temperatura correcta (-100 - 100)"<<endl;
		return 0; //Si se ingresa la temperatura fuera del rango automaticamente finaliza el programa
	}
	
	else cout<<"La temperatura ingresada es de: "<<temp_c<<" C (Celsius)"<<endl; //Para continuar, usare un else que muestre la temperatura ingresada y la ejecucion del programa sigue
	
	//Las lineas a continuacion piden un umbral de comparacion, como se pide en el enunciado, y hago que se ingrese luego de validar el rango que debe ser ingresado por el usuario para evitar errores
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"Ingrese una temperatura umbral para comparar"<<endl; 
	cin>>umbral;
	cout<<"---------------------------------------------------------------"<<endl;
	
	
	
	temp_f = (temp_c*9/5)+ 32; //Esta es la formula para transformar grados Celsius a Fahrenheit
    cout << "Su temperatura en grados Fahrenheit es de: " << temp_f << " F" << endl;
	
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"La temperatura ingresa es: "<<endl;
	(temp_c < 0 ) ? cout<<"Muy fria"<<endl : (temp_c >= 0 && temp_c < 15 ) ? cout<<"Fria"<<endl : (temp_c >=15 && temp_c <30) ? cout<<"Templada"<<endl : (temp_c >=30) ? cout<<"Caliente"<<endl : cout<<"Error";
	//La linea anterior usa ternarios para mostrar un mensaje segun el rango en el que este la temperatura ingresada por el usuario 
	
	cout<<"---------------------------------------------------------------"<<endl;
	(temp_c<umbral) ? cout<<"El numero ingresado es menor al umbral"<<endl : cout<<"El numero ingresado es mayor al umbral"<<endl;
	//La linea anterior compara con ternarios la temperatura con el umbral ingresados por el usuario para mostrar un mensaje 
	
	cout<<"---------------------------------------------------------------"<<endl;
	(fmod(temp_c, 5.0)== 0.0) ? cout<<"La temperatura es multiplo de 5"<<endl : cout<<"El numero ingresado no es multiplo de 5"<<endl;
	/*La línea anterior verifica si la temperatura ingresada es múltiplo de 5 o no. 
   Se usa el fmod() con la libreria de <cmath> para permitir que el usuario ingrese números con decimales y 
   así se puede determinar de manera adecuada si son o no múltiplos de 5, tal como dice el enunciado */

		
	
	return 0;
}