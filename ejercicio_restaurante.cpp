#include <iostream>
using namespace std;

int main(){
    int menu, precio, descuento, total;
    string dia;

    cout << "Seleccione un plato del menu" << endl;
    cout << "1. Pollo $10" << endl;
    cout << "2. Carne: $15" << endl;
    cout << "3. Pescado: $20" << endl;
    cin >> menu;

    cout << "Ingrese el dia de la semana" << endl;
    cin >> dia;

    switch (menu)
    {
    case '1':
    {
        precio = 10;
        break;

    }
    case '2':
    {
        precio = 15;
        break;
    }
    case '3':
    {
        precio = 20;
        break;
    }
    default:
    {
        cout << "Opcion invalida" << endl;
    }
    }

    if (dia=="Lunes" || dia=="miercoles")
    {
        descuento = precio*0.10;
        total = precio - descuento;

    } else if (dia=="viernes" && menu == 3)
    {
        descuento = precio*0.15;
        total = precio - descuento;
    } else
    {
        total = precio;
    }

    cout << "El precio a pagar es: " << total << endl;


    cin.get();
    return 0;
    }