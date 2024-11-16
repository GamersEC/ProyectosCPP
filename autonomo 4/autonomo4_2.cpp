#include <iostream>
using namespace std;

//Funcion de recursividad para sumar los digitos de un numero
int sumarDigitos(int num) {
    if (num == 0)
    {
        return 0;
    }
    
    return (num % 10) + sumarDigitos(num / 10);
}


int main() {
    int numero;
    
    //Solicitar el numero al usuario
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    //Suma de los digitos
    int suma = sumarDigitos(numero);
    
    //Imprimir resultado
    cout << "La suma de los digitos del numero " << numero << " es: " << suma << endl;

    return 0;
}