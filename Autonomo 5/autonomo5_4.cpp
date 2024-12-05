#include <iostream>
using namespace std;

int main(){

    //Variables
    int numeros[10];

    cout << "Ingresa 10 numeros enteros:" << endl;
    for (int i=0; i < 10; i++ )
    {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    //Modificar los negativos a ceros
    for (int i=0; i < 10; i++)
    {
        if (numeros[i] < 0)
        {
            numeros[i] = 0;
        }
    }

    //Resultados
    cout << "Reemplazando numeros negativos a cero (0):" << endl;
    for (int i=0; i < 10; i++)
    {
        cout << numeros[i] << " ";
    } 

    return 0;
}