#include <iostream>
using namespace std;

int main() {
    float calificacion, suma = 0.0;
    int contador = 0;
    char continuar;

    // Bucle para ingresar calificaciones
    do {
        // Pedir al usuario que ingrese una calificación
        cout << "Ingrese una calificación: ";
        cin >> calificacion;

        // Sumar la calificación ingresada
        suma += calificacion;
        // Incrementar el contador de calificaciones
        contador++;

        // Preguntar si desea ingresar otra calificación
        do {
            cout << "¿Desea ingresar otra calificación? (y/n): ";
            cin >> continuar;

            // Si el usuario ingresa un carácter inválido, se vuelve a preguntar
            if (continuar != 'y' && continuar != 'Y' && continuar != 'n' && continuar != 'N') {
                cout << "Entrada no válida. Por favor, responda 'y' para sí o 'n' para no." << endl;
            }
        } while (continuar != 'y' && continuar != 'Y' && continuar != 'n' && continuar != 'N');  // Volver a preguntar si la respuesta no es válida

    } while (continuar == 'y' || continuar == 'Y');  // Continuar mientras el usuario elija 'y' o 'Y'

    // Verificar si se ingresaron calificaciones
    if (contador > 0) {
        // Calcular y mostrar el promedio
        float promedio = suma / contador;
        cout << "El promedio de las " << contador << " calificaciones es: " << promedio << endl;
    } else {
        // Si no se ingresaron calificaciones
        cout << "No se ingresaron calificaciones." << endl;
    }

    cin.get();  // Espera antes de cerrar
    return 0;
}
