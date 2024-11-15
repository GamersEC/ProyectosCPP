#include <iostream>
using namespace std;

// Función iterativa para calcular el producto mediante sumas sucesivas
int productoIterativo(int a, int b) {
    int producto = 0;
    for (int i = 0; i < b; i++) {
        producto += a;  // Sumar a, b veces
    }
    return producto;
}

int main() {
    int num1, num2;
    
    // Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el producto (Iterativo): " << endl;
    cin >> num1 >> num2;
    
    // Calcular el producto usando iteración
    int resultadoIterativo = productoIterativo(num1, num2);
    
    // Mostrar el resultado
    cout << "El producto (Iterativo) de " << num1 << " y " << num2 << " es: " << resultadoIterativo << endl;

    return 0;
}
