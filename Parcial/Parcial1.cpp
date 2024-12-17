#include <iostream>
using namespace std;

// Función booleana
bool digito(char c) {
    return c >= '0' && c <= '9';
}

// Función recursiva para calcular serie
void generarSerie(int* serie, int indice, int cantidad) {
    if (indice >= cantidad) {
        return; // Caso base
    }
    serie[indice] = (serie[indice - 1] * serie[indice - 1]) - 1;
    generarSerie(serie, indice + 1, cantidad); // Llamada recursiva
}

// Función contar impares
int impares(int inicio, int fin) {
    int contador = 0;
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            contador++;
        }
    }
    return contador;
}

// Función para el área del círculo
double areaCirculo(double radio) {
    return 3.14 * radio * radio;
}

// Función para el área del triángulo
double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Función principal
int main() {
    char opc, caracter;
    int termino1, terminostotal, inicio, fin, totalimpares, menuarea;
    double radio, base, altura;

    cout << "Seleccione la opción que desea realizar" << endl;
    cout << "a. Función booleana" << endl;
    cout << "b. Serie Matemática" << endl;
    cout << "c. Contar números impares" << endl;
    cout << "d. Área de un círculo o triángulo" << endl;
    cin >> opc;

    switch (opc) {
        case 'a': {
            cout << "Ingrese un carácter: ";
            cin >> caracter;
            if (digito(caracter)) {
                cout << caracter << " es un dígito de 0-9" << endl;
            } else {
                cout << caracter << " no es un dígito de 0-9" << endl;
            }
        } break;

        case 'b': {
            cout << "Ingrese el primer término: ";
            cin >> termino1;
            cout << "Ingrese la cantidad de términos que desea generar: ";
            cin >> terminostotal;

            if (terminostotal <= 0) {
                cout << "La cantidad de términos debe ser mayor que 0." << endl;
                break;
            }

            int* serie = new int[terminostotal]; // Uso de memoria dinámica
            serie[0] = termino1;
            generarSerie(serie, 1, terminostotal);

            cout << "La serie es: ";
            for (int i = 0; i < terminostotal; i++) {
                cout << serie[i] << " ";
            }
            cout << endl;

            delete[] serie; // Liberar memoria
        } break;

        case 'c': {
            cout << "Ingrese el número inicial del rango: ";
            cin >> inicio;
            cout << "Ingrese el número final del rango: ";
            cin >> fin;

            if (inicio > fin) {
                cout << "El número inicial debe ser menor o igual al final." << endl;
                break;
            }

            totalimpares = impares(inicio, fin);
            cout << "La cantidad de números impares en el rango ingresado es: " << totalimpares << endl;
        } break;

        case 'd': {
            cout << "Seleccione el área que desea calcular" << endl;
            cout << "1. Calcular área del círculo" << endl;
            cout << "2. Calcular el área del triángulo" << endl;
            cin >> menuarea;

            if (menuarea == 1) {
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                cout << "El área del círculo es: " << areaCirculo(radio) << endl;
            } else if (menuarea == 2) {
                cout << "Ingrese la base del triángulo: ";
                cin >> base;
                cout << "Ingrese la altura del triángulo: ";
                cin >> altura;
                cout << "El área del triángulo es: " << areaTriangulo(base, altura) << endl;
            } else {
                cout << "Opción no válida..." << endl;
            }
        } break;

        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}