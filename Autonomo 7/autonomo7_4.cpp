#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int n;
    cout << "Ingrese el tamanio de la matriz cuadrada: ";
    cin >> n;

    //Declarar la matriz
    vector<vector<int>> matriz1(n, vector<int>(n));
    vector<vector<int>> matriz2(n, vector<int>(n));
    vector<vector<int>> matrizCubo(n, vector<int>(n));

    //Funcion para verificar si el numero es par
    auto esPar = [](int num) {return num % 2 == 0;};

    //Leer elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            do {
                cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> num;
                if (!esPar(num)) {
                    cout << "El numero debe ser par." << endl;
                }
            } while (!esPar(num));
            matriz1[i][j] = num;
        }
    }

    //Leer elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            do {
                cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> num;
                if (!esPar(num)) {
                    cout << "El numero debe ser par." << endl;
                }
            } while (!esPar(num));
            matriz2[i][j] = num;
        }
    }

    //Crear la tercera matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizCubo[i][j] = pow(matriz1[i][j], 3);
        }
    }

    //Modificar los elementos de la última fila de la segunda matriz
    for (int j = 0; j < n; j++) {
        matriz2[n - 1][j] *= 2;
    }

    //Imprimir la primera matriz
    cout << "\nMatriz 1: " << endl;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }

    //Imprimir la segunda matriz
    cout << "\nMatriz 2: " << endl;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }

    //Imprimir la tercera matriz
    cout << "\nMatriz 3 (Cubo de la primera matriz): " << endl;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrizCubo[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}