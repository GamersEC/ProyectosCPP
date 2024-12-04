#include <iostream>
#include <iomanip>
using namespace std;

//2. Calcular la temperatura promedio de una semana(7dias).

int main() 
{
	float temperatura[7], promedio, suma=0;
	cout<<"Ingrese la temperatura en grados Celsius de cada dia durante una semana: "<<endl;
	for(int i=0; i<7; i++)
	{
		cout<<"La temperatura del dia "<<i+1<<": ";
		cin>>temperatura[i];
		suma +=temperatura[i];
		
	}
	
	promedio=suma/7;
	cout<<fixed<<setprecision(2);
	cout<<"\nLa temperatura promedio de una semana x es: "<<promedio<<" Celsius";
	
	return 0;
}