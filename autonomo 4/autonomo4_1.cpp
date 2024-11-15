#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    // Solicitar al usuario el número de elementos de la serie
    cout << "Ingrese la cantidad de números en la serie factorial: ";
    cin >> n;

    // Generar la serie factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calcular el factorial
        cout << factorial << " "; // Imprimir el factorial correspondiente
    }

    cout << endl;
    return 0;
}
