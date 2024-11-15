#include <iostream>
using namespace std;

// Función recursiva para calcular el producto mediante sumas sucesivas
int productoRecursivo(int a, int b) {
    if (b == 0) {
        return 0;  // Caso base: si b es 0, el producto es 0
    }
    return a + productoRecursivo(a, b - 1);  // Suma a y reduce b en 1
}

int main() {
    int num1, num2;
    
    // Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el producto (Recursivo): " << endl;
    cin >> num1 >> num2;
    
    // Calcular el producto usando recursividad
    int resultadoRecursivo = productoRecursivo(num1, num2);
    
    // Mostrar el resultado
    cout << "El producto (Recursivo) de " << num1 << " y " << num2 << " es: " << resultadoRecursivo << endl;

    return 0;
}
