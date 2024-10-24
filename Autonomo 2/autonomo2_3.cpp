#include <iostream>
using namespace std;

int main() {

    //Variables locales
    int n, i;
    long long termino1 = 0, termino2 = 1, termino3 = 0, suma = 0, producto = 1; //Se usa datos de tipo long long ya que la serie de Fibonacci va creciendo exponencialmente


    //Solicitar al usuario el numero de terminos
    cout << "Ingrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> n;


    //Mensaje de salida de la serie
    cout << "Serie de Fibonacci: ";


    //Condicional para la serie de Fibonacci
    for (i = 1; i <= n; ++i) {
        cout << termino1 << " "; //Imprimir el término actual


        //Verificar si el término es par o impar
        if (termino1 % 2 == 0) {
            suma += termino1; //Sumar pares
        } else {
            producto *= termino1; //Multiplicar impares
        }


        //Calcular el siguiente término de la serie de Fibonacci
        termino3 = termino1 + termino2;
        termino1 = termino2;
        termino2 = termino3;
    }


    //Imprimir la suma de los pares e impares
    cout << endl;
    cout << "Suma de numeros pares: " << suma << endl;
    cout << "Producto de numeros impares: " << producto << endl;

    cin.get();
    return 0;
}