#include <iostream>
using namespace std;

// Función recursiva para sumar los dígitos de un número
int sumaDigitos(int num) {
    if (num == 0) {
        return 0;  // Caso base: si el número es 0, la suma de los dígitos es 0
    }
    return (num % 10) + sumaDigitos(num / 10);  // Descomposición del número
}

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    // Calcular la suma de los dígitos del número
    int suma = sumaDigitos(numero);
    
    // Mostrar el resultado
    cout << "La suma de los dígitos de " << numero << " es: " << suma << endl;

    return 0;
}