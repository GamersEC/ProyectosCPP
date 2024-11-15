#include <iostream>
using namespace std;

// Función recursiva para calcular el MCD
int mcdRecursivo(int a, int b) {
    if (b == 0) {
        return a;  // Caso base: si b es 0, el MCD es a
    }
    return mcdRecursivo(b, a % b);  // Llamada recursiva con (b, a % b)
}

int main() {
    int num1, num2;
    
    // Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el MCD (Recursivo): " << endl;
    cin >> num1 >> num2;
    
    // Calcular el MCD usando recursividad
    int resultadoRecursivo = mcdRecursivo(num1, num2);
    
    // Mostrar el resultado
    cout << "El MCD (Recursivo) de " << num1 << " y " << num2 << " es: " << resultadoRecursivo << endl;
    
    return 0;
}
