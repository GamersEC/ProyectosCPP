#include <iostream>
using namespace std;


//Funcion recursiva para calcular el Maximo Comun Divisor (MCD)
int mcdRecursivo(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcdRecursivo(b, a % b);
}


//Funcion iterativa para calcular el Maximo Comun Divisor (MCD)
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
    cout << "Ingrese dos numeros para calcular el Maximo Comun Divisor (MCD): " << endl;
    cin >> num1 >> num2;

    //Calcular MCD con Recursion
    resultadoRecursivo = mcdRecursivo(num1, num2);

    //Calcular MCD con Iteracion
    resultadoIterativo = mcdIterativo(num1, num2);

    //Imprimir resultados
    cout << "*** Resultado Recursivo ***" << endl;
    cout << "El MCD de los numeros " << num1 << " y " << num2 << " es: " << resultadoRecursivo << endl;
    cout << endl;
    cout << "*** Resultado Iterativo ***" << endl;
    cout << "El MCD de los numeros " << num1 << " y " << num2 << " es: " << resultadoIterativo << endl;

    return 0;
}