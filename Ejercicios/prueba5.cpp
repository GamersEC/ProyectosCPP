/*Escribe un programa que solicite la edad de una persona e imprima su categoría:

Menor de 13: "Niño"
De 13 a 17: "Adolescente"
De 18 a 64: "Adulto"
65 o más: "Adulto Mayor"*/

#include<iostream>
using namespace std;

int main()
{
	int edad;
	cout<<"Ingresa tu edad: "; cin>>edad;
	if (edad<13)
	{
		cout<<"Niño";
	}
	else if(edad>=13 && edad<=17 )
	{
		cout<<"Adolescente";
	}
	else if(edad>=18 && edad<=64 )
	{
		cout<<"Adulto";
	}
	else if (edad>65)
	{
		cout<<"Adulto Mayor";
	}
	return 0;
}