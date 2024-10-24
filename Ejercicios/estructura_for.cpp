#include <iostream>
using namespace std;

int main(){

    float nota = 0, suma = 0, promedio = 0;
    
    //Estructura de repeticion for
     for (int i=1;i<=5;i++)
     {
        cout << "Ingrese la nota " << i << endl;
        cin >> nota;
        suma = suma + nota;
     }

     promedio = suma / 5;
     cout << "El promedio es: " << promedio;

    return 0;
}