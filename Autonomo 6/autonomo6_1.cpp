#include <iostream>
using namespace std;

int main() {

    //Variable
     int estudiantes;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> estudiantes;

    //Condicional para verificar que los estudiantes sean positivos
    if (estudiantes <= 0) {
        cout << "La cantidad de estudiantes debe ser mayor a 0" << endl;
        return 0;
    }

    //Arreglos
    float materia1[estudiantes];
    float materia2[estudiantes];

    //Ingreso de notas de la primera materia
    cout << "Ingrese las notas de la materia 1: " << endl;
    for (int i = 0; i < estudiantes; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> materia1[i];
    }
    //Ingreso de notas de la segunda materia
    cout << "Ingrese las notas de la materia 2: " << endl;
    for (int i = 0; i < estudiantes; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> materia2[i];
    }

    //Diferencia de las calificaciones
    cout << "Diferencia de las calificaciones: " << endl;
    for (int i = 0; i< estudiantes; i++) {
        cout << "Estudiante " << i + 1 << ": " << materia1[i] - materia2[i] << endl;
    }
    return 0;
}