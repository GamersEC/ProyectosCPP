#include <iostream>
using namespace std;


//Funcion de recursividad para calcular el producto de dos numeros mediante sumas sucesivas
int productoRecursivo(int a, int b) {
    if (b == 0)
    {
        return 0;
    }

    //Condicional para los numeros negativos
    if (b < 0)
    {
        return -productoRecursivo(a, -b);
    }

    return a + productoRecursivo(a, b - 1);
}


//Función iterativa para calcular el producto de dos numeros mediante sumas sucesivas
int productoIterativo(int a, int b) {
    int productoIterativo = 0;

    //Condicional para numeros negativos
    if (b < 0)
    {
        a = -a;
        b = -b;
    }

    for (int i = 0; i < b; i++)
    {
        productoIterativo += a;
    }

    return productoIterativo;
}


int main() {
    int num1, num2, resultadoRecursivo, resultadoIterativo;
    
    //Solicitar los numeros al usuario
    cout << "Ingrese dos numeros para calcular el producto: " << endl;
    cin >> num1 >> num2;
    
    //Calcular el producto Recursivo
    resultadoRecursivo = productoRecursivo(num1, num2);

    //Calcular el producto Iterativo
    resultadoIterativo = productoIterativo(num1, num2);
    
    //Imprimir resultado
    cout << "*** Resultado Recursivo ***" << endl;
    cout << "El producto de los numeros " << num1 << " y " << num2 << " es: " << resultadoRecursivo << endl;
    cout << endl;
    cout << "*** Resultado iterativo ***" << endl;
    cout << "El producto de los numeros " << num1 << " y " << num2 << " es: " << resultadoIterativo << endl;

    return 0;
}