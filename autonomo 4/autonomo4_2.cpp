#include <iostream>
using namespace std;

//Funcion de recursividad para sumar los digitos de un numero
int sumaDigitos(int num) {
    if (num == 0)
    {
        return 0;
    }
    
    return (num % 10) + sumaDigitos(num / 10);
}


int main() {
    int numero;
    
    //Solicitar el numero al usuario
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    //Suma de los digitos
    int suma = sumaDigitos(numero);
    
    //Imprimir resultado
    cout << "La suma de los dígitos del numero " << numero << " es: " << suma << endl;

    return 0;
}