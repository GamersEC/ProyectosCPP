#include <iostream>
using namespace std;

int main(){

    //variables
    int edad;
    char opcion;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad>=18)
    {
        cout << "**** Bienvenido *****" << endl;
        cout << "selecione una opcion" << endl;
        cout << "A. Calculadora" << endl;
        cout << "B. Imprimir nombre" << endl;
        cout << "C. Salir" << endl;
        cin >> opcion;

        switch(opcion)
        {
            case 'A':
            {
                cout << "Calculadora" << endl;
                break;
            }
            case 'B':
            {
                cout << "Mostrar datos" << endl;
                break;
            }
            case 'C':
            {
                cout << "Saliendo..." << endl;
            }
        }    
    }
    else
    {
        if (edad>=15 && edad<=17)
        {
            cout << "Te falta poco para poder entrar a este sitio" << endl;
        }
        else
        {
            cout << "No tienes permiso para acceder a este sitio" << endl;
        }
    }

    cin.get();
    return 0;
}