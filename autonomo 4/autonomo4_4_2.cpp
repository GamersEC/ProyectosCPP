#include <iostream>
using namespace std;

//Función iterativa para calcular el producto de dos números mediante sumas sucesivas
int producto(int a, int b) {
    int producto = 0;

    //Condicional para numeros negativos
    if (b < 0)
    {
        a = -a;
        b = -b;
    }

    for (int i = 0; i < b; i++)
    {
        producto += a;
    }

    return producto;
}


int main() {
    int num1, num2, resultado;
    
    //Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el producto: " << endl;
    cin >> num1 >> num2;
    
    //Calcular el producto
    resultado = producto(num1, num2);
    
    //Imprimir resultado
    cout << "El producto de los numeros " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}