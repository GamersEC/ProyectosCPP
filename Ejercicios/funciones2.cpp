#include <iostream>
using namespace std;

template <typename A>
A calcularmedia(A cantidad) {
    float numero;
    float resultado = 0;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        resultado += numero;
    }

    return resultado / cantidad;
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de numeros que va a registrar: ";
    cin >> cantidad;

    cout << "La media es: " << calcularmedia<float>(cantidad) << endl;

    cin.get();
    return 0;
}
