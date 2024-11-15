#include <iostream>
using namespace std;

//Funcion de recursividad para calcular el producto de dos números mediante sumas sucesivas
int producto(int a, int b) {
    if (b == 0)
    {
        return 0;
    }

    //Condicional para los numeros negativos
    if (b < 0)
    {
        return -producto(a, -b);
    }

    return a + producto(a, b - 1);
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