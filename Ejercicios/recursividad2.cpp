#include <iostream>
using namespace std;

void serie (int a, int b, int terminos){

    if (terminos <= 0)
    {
        return;
    }
    else
    {
        cout << a  << " ";
        serie (b, a + b, terminos - 1);
    }
}

int main(){

    int a, b, terminos;

    cout << "Ingresa 2 valores enteros: " << endl;
    cin >> a >> b;
    cout << "Cuantos terminos de la serie quieres mostrar: ";
    cin >> terminos;

    if (terminos <= 0) {
        cout << "No hay terminos que mostrar." << endl;
    } else {
        cout << "La serie es: ";
        serie(a, b, terminos);
    }

    return 0;
}