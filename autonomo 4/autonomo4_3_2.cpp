#include <iostream>
using namespace std;

//Funcion iterativa para calcular el Maximo Comun Divisor
int mcd(int a, int b) {
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}


int main() {
    int num1, num2, resultado;
    
    //Solicitar los numeros al usuario
    cout << "Ingrese dos números para calcular el Maximo Comun Divisor (MCD): " << endl;
    cin >> num1 >> num2;
    
    //Calcular el MCD
    resultado = mcd(num1, num2);
    
    //Imprimir resultado
    cout << "El MCD de los numeros " << num1 << " y " << num2 << " es: " << resultado << endl;
    
    return 0;
}