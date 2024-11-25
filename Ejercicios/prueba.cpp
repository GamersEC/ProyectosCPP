#include <iostream>
#include <iomanip>
using namespace std;

// Variables globales
double eurosdolares = 0.95;
double yenesdolares = 154;
double librasdolares = 0.79;

int main() {
    int menu;
    double dinero, resultado;


    //Solicitar el monto en dólares
    cout << "Ingrese la cantidad en dolares: $";
    cin >> dinero;


    //Mostrar opciones de conversión
    cout << "Seleccione la conversion que desea realizar:" << endl;
    cout << "1. Dolares a Euros" << endl;
    cout << "2. Dolares a Yenes" << endl;
    cout << "3. Dolares a Libras Esterlinas" << endl;
    cin >> menu;


    //Formatear la salida a dos decimales
    cout << fixed << setprecision(2);


    //Realizar la conversión según la opción seleccionada
    switch (menu) {
    case 1:
        resultado = dinero * eurosdolares;
        cout << "La conversion de $" << dinero << " a euros es: €" << resultado << endl;
        break;
    case 2:
        resultado = dinero * yenesdolares;
        cout << "La conversion de $" << dinero << " a yenes es: ¥" << resultado << endl;
        break;
    case 3:
        resultado = dinero * librasdolares;
        cout << "La conversion de $" << dinero << " a libras esterlinas es: £" << resultado << endl;
        break;
    }

    return 0;
}