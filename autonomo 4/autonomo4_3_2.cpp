#include <iostream>
using namespace std;

// Función iterativa para calcular el MCD
int mcdIterativo(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    // Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el MCD (Iterativo): " << endl;
    cin >> num1 >> num2;
    
    // Calcular el MCD usando iteración
    int resultadoIterativo = mcdIterativo(num1, num2);
    
    // Mostrar el resultado
    cout << "El MCD (Iterativo) de " << num1 << " y " << "num2 es: " << resultadoIterativo << endl;
    
    return 0;
}