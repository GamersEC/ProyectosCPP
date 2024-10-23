#include <iostream>
using namespace std;

int main(){

    int i = 1; //Variable contadora
    float nota = 0, suma = 0, promedio = 0;

    //Estructura de repeticion do-while
    do
    {
        cout << "Ingrese la nota " << i << endl;
        cin >> nota;
        suma = suma + nota;
        i++; //Incremento de la variable contadora
    } while (i<=5);

        promedio = suma / 5;
        cout << "El promedio es: " << promedio;

    return 0;
}