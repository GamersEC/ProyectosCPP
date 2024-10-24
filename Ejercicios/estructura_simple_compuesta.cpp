#include <iostream>
using namespace std;

int main(){
    
    int edad;
    cout << "Ingrese su edad" << endl;
    cin >> edad;

    //Estructura de control de decisión simple
    if (edad>=18)
    {
        cout << edad << " es mayor de edad" << endl; //Existe una sentencia por el verdadero
    }

    //Estructura de control de decisión compuesta
    else
    {
        cout << edad << " es menor de edad" << endl; // Existe una sentencia por el falso
    }
    return 0;
}