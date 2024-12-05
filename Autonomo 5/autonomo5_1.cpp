#include <iostream>
using namespace std;

int main(){

    //Variables
    int estudiantes = 20;
    float calificaciones[estudiantes];
    int rango1=0, rango2=0, rango3=0;

    cout << "Ingrese las calificaciones de los 20 estudiantes (0-10): " << endl;
    for (int i=0; i<estudiantes; i++)
    {
        do {
        //Calificaciones de los estudiantes
        cout << "Ingrese la calificacion del estudiante " << i+1 << ": ";
        cin >> calificaciones[i];

        //Condicion para repetir en caso de que no se cumpla el rango de calificaciones
        if (calificaciones[i] < 0 || calificaciones[i] > 10)
        {
            cout << "Ingrese una calificacion dentro del rango establecido" << endl;
        }

        } while (calificaciones[i] < 0 || calificaciones[i] > 10);
    }

    //Clasificacion de calificaciones segun el rango
    for (int i = 0; i < estudiantes; i++)
    {
        if (calificaciones[i] >= 0 && calificaciones [i] <=5)
        {
            rango1++;
        } else if (calificaciones[i]>=6 && calificaciones[i] <= 8)
        {
            rango2++;
        } else if (calificaciones[i] >= 9 && calificaciones[i] <= 10)
        {
            rango3++;
        }
    }

    //Resultados
    cout << "Estudiantes con calificaciones de 0-5: " << rango1 << endl;
    cout << "Estudiantes con calificaciones de 6-8: " << rango2 << endl;
    cout << "Estudiantes con calificaciones de 9-10: " << rango3 << endl;

    return 0;
}