#include <iostream>
using namespace std;

//factorial de un numero pero que funciones para un numero entero y flotante

double factorial(int num){

    float acumuladora = 1;
    {
        for (int i = 1; i <= num; i++)
        acumuladora = i*acumuladora;
    }
    
    return acumuladora;
}

double factorial(double deci){

    float acumuladora = 1;
    {
        for (int i = 1; i <= deci; i++)
        acumuladora = i*acumuladora;
    }
    
    return acumuladora;
}


int main(){

    int num_entero;
    double num_decimal;

    cout << "Ingrese un numero entero" << endl;
    cin >> num_entero;
    cout << "Factorial del numero entero:" << factorial(num_entero) << endl;

    cout << "Ingrese un numero decimal" << endl;
    cin >> num_decimal;
    cout << "Factorial del numero decimal: " << factorial(num_decimal) << endl;

    cin.get();
    return 0;
}