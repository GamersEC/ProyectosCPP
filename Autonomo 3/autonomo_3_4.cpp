#include <iostream>
using namespace std;

//Funcion calcularPotencia version 1
int calcularPotencia(int base, int expo){
    int resultado = 1;
    for (int i = 0; i < expo; i++)
    {
        resultado = resultado * base;
    }

return resultado;
}


//Funcion calcularPotencia version 2
    int calcularPotencia(int base){

        return base * base;
    }

    //Funcion principal
    int main(){
        int base, expo, resultado;
        cout << "Ingrese la BASE de la potencia: ";
        cin >> base;

        cout << "Ingrese el EXPONENTE de la potencia: ";
        cin >> expo;
        if (expo > 0)
        {
            //Funcion version 1
            resultado = calcularPotencia(base, expo);
            cout << "El resultado de " << base << "^" << expo << " es: " << resultado << endl;
        } else
        {
            //Funcion verion 2
            resultado = calcularPotencia(base);
            cout << "El resultado de " << base << "^2 es: " << resultado << endl;
        }
    }