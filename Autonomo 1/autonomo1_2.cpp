#include <iostream>
using namespace std;

//Constantes globales
const float pi=3.14159;
float radio=3;

int main ()
{
    //Variables locales
    float altura, volumen;

    cout << "Volumen de cilindro de radio "<< radio << endl;

    //Solicitar datos
    cout << "Ingrese la altura del cilindro: " << endl;
    cin >> altura;

    //Formula del volumen
    volumen = pi*(radio*radio)*altura;

    //Salida en terminal
    cout << "El volumen es: " << volumen << endl;

    cin.get();
    return 0;
}