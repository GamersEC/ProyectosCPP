
//Crea una función llamada sumar que reciba dos números 
//enteros como parámetros y devuelva su suma. Usa la función
//en el programa principal para pedir al usuario dos números y mostrar el resultado.


#include<iostream>
using namespace std;

float suma(int n1  , int n2)
{

return n1+n2;




}

int main()
{
    int n1, n2;
    cout<<"Hola Ingresa dos numeros"<<endl;
    cout<<"Numero 1: "; cin>>n1;
    cout<<"Numero 2: "; cin>>n2;

    cout<<"La suma total es: "<<suma(n1,n2);


    return 0;
}