#include <iostream>
using namespace std;

//Funcion de recursividad para calcular el Maximo Comun Divisor (MCD)
int mcd(int a, int b) {
    if (b == 0) 
    {
        return a;
    }
    
    return mcd(b, a % b);
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