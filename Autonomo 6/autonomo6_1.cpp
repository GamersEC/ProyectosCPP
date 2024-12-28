#include <iostream>

using namespace std;

int main() {

    int estudiantes;
    float diferencia;
    //Solicitar el numero de estudiantes
    cout << "Ingrese el numero de estudiantes: ";
    cin >> estudiantes;

    //Arreglo
    float materia1[estudiantes];
    float materia2[estudiantes];

    //Calificaciones de la primera materia
    cout << "Ingrese las calificaciones de la primer materia:\n";
    for (int i = 0; i < estudiantes; i++) {
        cout << "Estudiante " << i+1 << ": ";
        cin >> materia1[i];
    }

    //Calificaciones de la segunda materia
    cout << "Ingrese las calificaciones de la segunda materia:\n";
    for (int i = 0; i < estudiantes; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> materia2[i];
    }

    //Diferencia
    cout << "Diferencia de calificaciones entre las dos materias:\n";
    for (int i = 0; i < estudiantes; i++) {
    diferencia = materia1 - materia2;
    cout << "Estudiante " << i + 1 << ": " << diferencia << endl;
    }

    return 0;
}