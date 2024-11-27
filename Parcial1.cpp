#include <iostream>
using namespace std;

//Funcion booleana
bool digito(char c) {
    return c >= '0' && c <= '9';
}

//Funcion recursiva para calcular serie
void serie(int* serie, int indice, int cantidad) {
    if (indice == cantidad) {
        serie [indice] = (serie[indice -1] * serie [indice - 1]) - 1;
    }
    serie(serie, indice + 1, cantidad);
}

//Funcion contar impares
int impares(int inicio, int fin) {
    int contador = 0;
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            contador++;
        }
    }
    return contador;
}

//Funciones sobrecargadas

//Funcion para el area del circulo
double area(double radio) {
    return 3.14 * radio * radio;
}

//Funcion para el area del triangulo
double area(double base, double altura) {
    return (base * altura)/2;
}

//Funcion principal
int main() {
char opc, caracter;
    int termino1, terminostotal, inicio, fin, totalimpares, menuarea;
    double radio, base, altura;
    cout << "Seleccione la opcion que desea realizar" << endl;
    cout << "a. Funcion booleana" << endl;
    cout << "b. Serie Matematica" << endl;
    cout << "c. Contar numeros impares" << endl;
    cout << "d. Area de un circulo o rectangulo" << endl;
    cin >> opc;

    switch (opc) {
        case 'a': {
            cout << "Ingrese un caracter: ";
            cin >> caracter;
            if (digito(caracter)) {
                cout << caracter << " es un digito de 0-9" << endl;
            }else {
                cout << caracter << " no es un digito de 0-9" << endl;
            }
        }break;

        case 'b': {
            cout << "Ingrese el primer termino: ";
            cin >> termino1;
            cout << "Ingrese la cantidad de terminos que desea generar: ";
            cin >> terminostotal;

            int serie [terminostotal];
            serie[0] = termino1;
            serie(serie, 1, terminostotal);

            cout << "La serie es: ";
            for (int i = 0; i < terminostotal; i++) {
                cout << serie[i] << " ";
            }
            cout << endl;
        }break;

        case 'c': {
            cout << "Ingrese el numero inicial del rango: ";
            cin >> inicio;
            cout << "Ingrese el numero final del rango: ";
            cin >> fin;
            totalimpares = impares(inicio, fin);
            cout << "La cantidad de numeros impares en el rango ingresado es: " << totalimpares << endl;
        }break;

        case 'd': {
            cout << "Selecion el Area que desea calcular" << endl;
            cout << "1. Calcular Area de Circulo" << endl;
            cout << "2. Calcular el Area del triangulo" << endl;
            cin >> menuarea;

            if (menuarea == 1) {
                cout << "Ingrese el radio del circulo: ";
                cin >> radio;
                cout << "El area del circulo es: " << area(radio) << endl;
            } else if (menuarea == 2) {
                cout << "Ingrese la base del triangulo: ";
                cin >> base;
                cout << "Ingrese la altura del triangulo: ";
                cin >> altura;
                cout << "El area del triangulo es: " << area(base, altura) << endl;
            } else {
                cout << "Opcion no valida..." << endl;
            }
        }
    }

    return 0;
}