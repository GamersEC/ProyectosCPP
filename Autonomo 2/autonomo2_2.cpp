#include <iostream>
using namespace std;

int main()
{
    //Variable local
    int dia;

    //Opciones validas
    cout << "Frase motivaciones semanales" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;
    cout << "Ingrese la opcion: ";

    cin >> dia;

    //Menu de opciones segun el dia de la semana
    switch (dia)
    {
    case 1:
    {
        cout << "Motivacion del dia" << endl;
        cout << "Si puedes soñarlo puedes hacerlo, recuerda que todo esto comenzó con un ratón." << endl;
        break;
    }
    case 2:
    {
       cout << "Motivacion del dia" << endl;
       cout << "Cáete siete veces y levántate ocho." << endl;
       break;
    }
    case 3:
    {
        cout << "Motivacion del dia" << endl;
        cout << "El triunfo del verdadero hombre surge de las cenizas del error." << endl;
        break;
    }
    case 4:
    {
        cout << "Motivacion del dia" << endl;
        cout << "Todo lo que puedas imaginar, es real." << endl;
        break;
    }
    case 5:
    {
        cout << "Motivacion del dia" << endl;
        cout << "El fracaso no es una opción. Todo el mundo tiene que triunfar." << endl;
        break;
    }
    case 6:
    {
        cout << "Motivacion del dia" << endl;
        cout << "Un objetivo sin un plan es solo un deseo." << endl;
        break;
    }
    case 7:
    {
        cout << "Motivacion del dia" << endl;
        cout << "Lo que haces hoy puede mejorar todos tus mañanas." << endl;
        break;
    }
    
    default:
        cout << "La opcion ingresada no es valida" << endl; //Mensaje de error
        break;
    }


    cin.get();
    return 0;
}