#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    //Solicitar al usuario la cantidad de numeros de la serie
    do {
        cout << "Ingrese la cantidad de numeros de la serie que quiere visulizar: ";
        cin >> n;

        //Condicional para verificar que n sea mayor que cero
        if (n <= 0) {
            cout << "Por favor, ingrese un numero mayor que 0" << endl;
        }
    } while (n <= 0);

    //Calcular el factorial 
    cout << "La serie factorial es: ";
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << factorial << " ";
    }

    return 0;
}