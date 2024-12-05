#include <iostream>
using namespace std;

int main (){

    //Variables
    int numeros[10];
    int conteo[5]={0};

    cout << "Ingrese 10 numeros enteros (1-5): " << endl;
    for (int i = 0; i < 10; i++)
    {
        do {
            cout << "Numero " << i+1 << ": ";
            cin >> numeros[i];

            //Condicional para el rango de numeros 1 a 5
            if (numeros[i] < 1 || numeros[i] > 5)
            {
                cout << "Ingrese numeros dentro del rango establecido (1-5)" << endl;
            }
        } while (numeros[i] < 1 || numeros[i] > 5);
    }

    //Contar los numeros
    for (int i = 0; i < 10; i++)
    {
        conteo[numeros[i] - 1]++;
    }
    //Resultados
    cout << "Resultados: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "El numero " << i+1 << " aparece " << conteo[i] << " veces" << endl;
    }

    return 0;
}