#include <iostream>
#include <cmath>
using namespace std;

// Serie de potencias: solicita por teclado base y exponente, y calcula la suma de los primeros n términos
// Ejemplo: para base = 2 y exponente = 3, la serie sería 2^3 + 2^6 + 2^9 + ...

long long seriepotencia(long long base, int exponente, int limite) {
    if (limite == 0) {
        return 0;
    } else {
        long long term = pow(base, exponente * limite);
        return term + seriepotencia(base, exponente, limite - 1);
    }
}

int main() {
    long long base;
    int exponente, limite;
    
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << "Ingrese el número de términos (limite): ";
    cin >> limite;

    long long resultado = seriepotencia(base, exponente, limite);
    cout << "La suma de la serie es: " << resultado << endl;

    return 0;
}