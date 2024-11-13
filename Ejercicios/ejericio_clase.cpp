#include <iostream>
#include <cmath>
using namespace std;

int calculomatematico(int limite) {
    int suma = 0; // Inicializamos la suma en 0

    for(int i = 1; i <= limite; i+=4)
    {
        suma += pow(i, 2); // Elevamos 'i' al cuadrado
    }

    return suma; // Retornamos la suma final

}


int calculomatematico (int a1, int b1){

    for (int i =a1; i <= b1; i+=incremento)
    {
        
    }

}


int main() {
    
    int numero, a, b;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "La suma de los cuadrados hasta el límite ingresado es: " << calculomatematico(numero) << endl;

    cout << "ingrese un numeor entero para A para la serie";
    cin >> a;
    cout << "ingrese un numeor entero para B para la serie";
    cin >> b;

    return 0;
}