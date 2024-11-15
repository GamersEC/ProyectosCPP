#include <iostream>
using namespace std;

//Funcion recursiva
void Serie(int n, int terminoActual = 1, int diff = 2) {
    if (n == 0) {
        return; // Caso base: si n es 0, se termina la recursión
    }
    
    //Imprimir el término actual
    cout << terminoActual << " ";
    
    //Llamada recursiva para generar el siguiente término
    Serie(n - 1, terminoActual + diff, diff + 1);
}

int main() {

    int n;

    //Solicitar dato
    cout << "Introduce el número de términos que deseas ver en la serie: ";
    cin >> n;
    
    // Generar y mostrar la serie
    cout << "Serie: ";
    Serie(n);
    cout << endl;

    return 0;
}