#include <iostream>
using namespace std;

//Funcion para kilometros a millas
double km_mi(double km) {
    return km * 0.621;
}

//Funcion para Celsius a Fahrenheit
double c_f(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

//Funcion gramos a kilogramos
double g_kg(double gramos) {
    return gramos / 1000.0;
}

int main() {
    int opcion;
    cout << "*** Menu de converciones***" << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Celsius a Fahrenheit" << endl;
    cout << "3. Gramos a Kilogramos" << endl;
    cout << "Elija la opcion: ";
    cin >> opcion;


    //Valor ingresado por el usuario
    double valor;
    cout << "Ingresa el valor: ";
    cin >> valor;

    switch (opcion) {
        case 1:
        {
            cout << "Conversion de Kilometros a Mill: " << km_mi(valor) << " mi" << endl;
            break;
        }
            
        case 2:
        {
            cout << "Conversion de Celsius a Fahrenheit: " << c_f(valor) << " °F" << endl;
            break;
        }

        case 3:
            {
                cout << "Conversion de Gramos a Kilogramos: " << g_kg(valor) << " kg" << endl;
            break;
            }

        default:
        {
            cout << "La opcion no es valida" << endl;
            break;
        }
            
    }

    return 0;
}