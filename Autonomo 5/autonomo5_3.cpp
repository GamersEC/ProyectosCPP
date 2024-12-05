#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    //Variables
    int numeros[10];
    double suma=0.0, media=0.0, desviacionSuma=0.0, desviacion=0.0;

    cout << "Ingresa 10 numeros enteros" << endl;
    for (int i=0; i < 10; i++)
    {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    //Calcular la media
    media = suma/10;

    //Calcular la desviacion
    for (int i=0; i < 10; i++)
    {
        desviacionSuma += pow(numeros[i] - media, 2);
    }
    desviacion = sqrt(desviacionSuma/10);

    //Resultados
    cout << fixed << setprecision(2);
    cout << "La media es: " << media << endl;
    cout << "La desviacion estandar es: " << desviacion << endl;

    return 0;
}