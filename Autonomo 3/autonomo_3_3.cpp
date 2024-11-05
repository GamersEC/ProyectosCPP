#include <iostream>
#include <string>
using namespace std;

// Función para contar vocales en la cadena
int contarVocales(const string& cadena) {
    int contadorVocales = 0;
    for (char c : cadena) {
        // Convertimos el carácter a minúscula para facilitar la comparación
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }
    return contadorVocales;
}

// Función para contar consonantes en la cadena
int contarConsonantes(const string& cadena) {
    int contadorConsonantes = 0;
    for (char c : cadena) {
        // Convertimos el carácter a minúscula para facilitar la comparación
        c = tolower(c);
        // Verificamos si es una consonante (letra que no es vocal)
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            contadorConsonantes++;
        }
    }
    return contadorConsonantes;
}

int main() {
    string cadena;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena); // Permite ingresar una línea completa de texto

    int numVocales = contarVocales(cadena);
    int numConsonantes = contarConsonantes(cadena);

    cout << "Número de vocales: " << numVocales << endl;
    cout << "Número de consonantes: " << numConsonantes << endl;

    return 0;
}