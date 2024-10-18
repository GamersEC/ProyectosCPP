#include <iostream>
using namespace std;

int main(){
    int menu, precio;
    string dia;

    cout << "*** Menu de Restaurante ***" << endl;
    cout << "1. Pollo $10" << endl;
    cout << "2. Carne: $15" << endl;
    cout << "3. Pescado: $20" << endl;
    cout << "Ingrese una opcion: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        precio = 10;
        break;

    }
    case 2:
    {
        precio = 15;
        break;
    }
    case 3:
    {
        precio = 20;
        break;
    }
    default:
    {
        cout << "Opcion invalida" << endl;
        return 1;
    }
    }

    cout << "Ingrese el dia de la semana (use solo minusculas)" << endl;
    cin >> dia;

    if (dia=="lunes" || dia=="miercoles")
    {
        precio = precio-(precio*0.1);

    } else if (dia=="viernes" && menu == 3)
    {
        precio = precio-(precio*0.15);

    } else
    {
        precio = precio;
    }

    cout << "Total a pagar: " << precio << endl;

    return 0;
    }