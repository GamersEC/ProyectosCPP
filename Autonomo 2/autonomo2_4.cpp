#include <iostream>
using namespace std;

int main() {

    //Variables locales
    int contador = 0;
    float calificacion, suma = 0.0, promedio;
    char continuar;


    //Bucle de repeticion para ingresar calificaciones
    do {
        //Solicitar la calificacion
        cout << "Ingrese una calificacion (0-10): ";
        cin >> calificacion;


        //Bucle de repeticion para limitar el rango de calificaciones aceptadas
        while (calificacion<0 || calificacion>10)
        {
            cout << "Por favor ingrese calificaciones dentro del rango establecido (0-10): "; cin >> calificacion;
        }


        //Sumar las calificaciones
        suma += calificacion;


        //Incrementar el contador de calificaciones
        contador++;


        //Bucle de repeticion para preguntar si desea ingresar otra calificacion
        do {
            cout << "¿Desea ingresar otra calificacion? (y/n): ";
            cin >> continuar;


            //Condicional por si el usuario ingresa un caracter no valido
            if (continuar != 'y' && continuar != 'Y' && continuar != 'n' && continuar != 'N') {
                cout << "Entrada no válida. Por favor, responda 'y' para sí o 'n' para no" << endl;
            }


        //Repetir la pregunta de si desea volver a ingresar la calificacion
        } while (continuar != 'y' && continuar != 'Y' && continuar != 'n' && continuar != 'N');


    //Continuar mientras el usuario de una respuesta positiva
    } while (continuar == 'y' || continuar == 'Y');


    //Verificar si se ingresaron calificaciones
    if (contador > 0) {


        //Calcular y mostrar el promedio
        promedio = suma / contador;
        cout << "El promedio de las " << contador << " calificaciones es: " << promedio << endl;
    }

    cin.get();
    return 0;
}