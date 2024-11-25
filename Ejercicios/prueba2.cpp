//Haz un programa que pida dos números y una operación (+, -, *, /) al usuario. 
//Según la operación ingresada, realiza el cálculo 
//correspondiente y muestra el resultado. 
//Considera el caso de la división por cero.



#include <iostream>
using namespace std;

int main()
{
float num1, num2, resultado;
char operacion;
cout << "Hola Ingresa dos numeros" << endl;
cout << "Numero 1: "; cin >> num1;
cout << "Numero 2: "; cin >> num2;
cout << "Que operacion desea realizar +, -, *, /" << endl;
cin >> operacion;

if (operacion == '+')
{
    resultado = num1 + num2;
}else if (operacion == '-')
{
    resultado = num1 - num2;

}else if (operacion == '*')
{
    resultado = num1 * num2;    
}else
{
    resultado = num1/num2;
    
}



cout << "El resultado es: " << resultado;

return 0;
}