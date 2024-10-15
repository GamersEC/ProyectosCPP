#include <iostream>
using namespace std;

int main(){
    //Estructura de control de decisión simple
    int edad;
    cout << "Ingrese su edad" << endl;
    cin >> edad;
    if (edad>=18)
    {
        cout << edad << " es mayor de edad" << endl; //Existe una sentencia por el verdadero
    }

    else //Estructura de control de decisión compuesta
    {
        cout << edad << " es menor de edad" << endl; // Existe una sentencia por el falso
    }
    return 0;
}