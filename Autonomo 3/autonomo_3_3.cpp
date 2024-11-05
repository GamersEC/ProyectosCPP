#include <iostream>
using namespace std;

void vocales_consonantes(const string& cadena, int& vocales, int& consonantes) {
    vocales = consonantes = 0;
    for (char c : cadena) {
        c = tolower(c); //Convertir a minúsculas el texto
        if (c >= 'a' && c <= 'z') { //Verificar si es una letra
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vocales++;
            else
                consonantes++;
        }
    }
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena); //Se usa getline para leer toda la linea incluido los espacios

    int vocales, consonantes;
    vocales_consonantes(cadena, vocales, consonantes);

    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;

    return 0;
}
