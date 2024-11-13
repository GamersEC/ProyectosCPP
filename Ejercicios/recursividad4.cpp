#include <iostream>
#include <cmath>
using namespace std;

// Serie de potencias: solicita por teclado base y exponente, y calcula la suma de los primeros n términos
// Ejemplo: para base inicial = 2 y exponente = 3, la serie sería 2^3 + 8^3 + 27^3 + ...

long long seriepotencia(long long base, int exponente, int limite) {
    if (limite == 0) {
        return 0; // Caso base: cuando ya no hay más términos
    } else {
        long long term = pow(base, exponente); // Calcula el término actual de la serie
        cout << base << "^" << exponente << " = " << term << endl; // Muestra el término actual
        return term + seriepotencia(base + 1, exponente, limite - 1); // Incrementa base, acumula el término actual y llama recursivamente
    }
}

int main() {
    long long base;
    int exponente, limite;
    
    cout << "Ingrese la base inicial: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << "Ingrese el número de términos (limite): ";
    cin >> limite;

    long long resultado = seriepotencia(base, exponente, limite);
    cout << "La suma de la serie es: " << resultado << endl;

    return 0;
}