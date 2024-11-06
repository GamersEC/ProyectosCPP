#include <iostream>
using namespace std;

double celsiusAFahrenheit(double c) {
    return (c * 9 / 5 + 32);
}

double fahrenheitACelsius(double f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int opcion;
    double c, f;
    cout << "Seleccione una opcion de conversion" << endl;
    cout << "1. °C a °F" << endl;
    cout << "2. °F a °C" << endl;
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese grados Celsius" << endl;
        cin >> c;
        cout << celsiusAFahrenheit(c) << " °F" << endl;
    } else if (opcion == 2) {
        cout << "Ingrese grados Fahrenheit" << endl;
        cin >> f;
        cout << fahrenheitACelsius(f) << " °C" << endl;
    }

    cin.get();
    return 0;
}