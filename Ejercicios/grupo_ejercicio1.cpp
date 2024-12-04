#include <iostream>
using namespace std;

//1. Contar cuántas letras son "a" en un arreglo de 20 letras.

int main() 
{
	char letras[20];
	int contador = 0;
	
	cout<<"Ingrese 20 letras: "<<endl;
	for(int i=0; i<20; i++)
	{
		cin>>letras[i];
		
		if(letras[i]== 'a')
		{
			contador++;
		}
	}
	
	
	cout<<"\n La cantidad de letras son: "<<contador;
	return 0;
}