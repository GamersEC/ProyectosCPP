#include <iostream>
using namespace std;


//Función recursiva para calcular el Máximo Común Divisor (MCD)
int mcdRecursivo(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcdRecursivo(b, a % b);
}


//Función iterativa para calcular el Máximo Común Divisor (MCD)
int mcdIterativo(int a, int b) {
    while (b != 0) {
       int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {
    int num1, num2, resultadoRecursivo, resultadoIterativo;

    //Solicitar los números al usuario
    cout << "Ingrese dos números para calcular el Máximo Común Divisor (MCD): " << endl;
    cin >> num1 >> num2;

    //Calcular MCD usando recursión
    resultadoRecursivo = mcdRecursivo(num1, num2);

    //Calcular MCD usando iteración
    resultadoIterativo = mcdIterativo(num1, num2);

    //Imprimir resultados
    cout << "*** Resultado Recursivo ***" << endl;
    cout << "El MCD de los números " << num1 << " y " << num2 << " es: " << resultadoRecursivo << endl;
    cout << endl;
    cout << "*** Resultado con Iterativo ***" << endl;
    cout << "El MCD de los números " << num1 << " y " << num2 << " es: " << resultadoIterativo << endl;

    return 0;
}