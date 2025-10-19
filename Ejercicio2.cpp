/*Escriba un programa que calcule el impuesto de un producto basado en su precio y categoría, utilizando operadores ternarios.
El programa debe solicitar al usuario ingresar el precio del producto y su categoría, donde las categorías son:
"Electrónica" (se aplica un 20% de impuesto).
"Ropa" (se aplica un 10% de impuesto).
"Alimentos" (se aplica un 5% de impuesto).
Si el precio es mayor a 1000, se aplica un descuento del 10% sobre el precio original antes de calcular el impuesto.*/

#include <iostream>

using namespace std;

int main()
{
	int cat;
	float precio, imp_f, precio_final,desc,prec_p,imp_i; 
	
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precio;
	
	cout<<"Ingrese la categoria del producto"<<endl;
	cout<<"1: Electronica"<<endl;
	cout<<"2: Ropa"<<endl;
	cout<<"3: Alimentos"<<endl;
	cin>>cat; 
	
	desc = (precio>1000) ? precio * 0.10 : 0; //La variable descuento actua directamente sobre el precio introducido por el usuario
	

	imp_i = (cat==1) ? 0.20: (cat==2) ? 0.10: (cat==3) ? 0.05 : -1; /*La variable impuesto inicial calcula el impuesto posterior al
	descuento o no del precio y categoria introducido por el usuario*/
	
	if (cat==-1)//Este IF valida que se introduzca una opción de las 3 indicadas, si no, termina el programa
	{
		cout<<"-----ERROR: INTRODUZCA UNA CATEGORIA VALIDA-----"<<endl;
		
		return 0;
	}
    
	prec_p= precio-desc; //Precio posterior es el precio que ingresó el usuario menos el descuento (10% o ninguno)
	imp_f= prec_p*imp_i; //Impuesto final del precio posterior al descuento por * el impuesto inicial (20%, 10% o 5%)
	precio_final= imp_f+prec_p; //Precio final es el impuesto final más el precio posterior al descuento
	
	cout<<"---------------------------------"<<endl;
	cout<<"EL PRECIO TOTAL ES DE : $"<<precio_final<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---- GRACIAS, VUELVA PRONTO ----"<<endl;
	
	return 0;
}