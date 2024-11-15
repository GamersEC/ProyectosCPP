#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    //Solicitar n al usuario
    cout << "Ingrese la cantidad de números para la serie: ";
    cin >> n;

    //Serie factorial
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;

        //Imprimir serie
        cout << factorial << " ";
    }

    cout << endl;
    return 0;
}