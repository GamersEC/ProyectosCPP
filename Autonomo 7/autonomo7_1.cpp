#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int m, n, k;

    //Valores de matrices y escalar
    cout << "Ingrese el numero de filas: ";
    cin >> m;
    cout << "Ingrese el numero de columnas: ";
    cin >> n;
    cout << "Ingrese el valor escalar: ";
    cin >> k;

    //matrices con vectores
    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<double>> C(m, vector<double>(n));

    //Ingreso de valores de la matriz A
    cout << "Ingrese los valores de la matriz A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    //Calcular valores de las matrices B y C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[i][j] * k;
            if (B[i][j] % 2 == 0) {
                C[i][j] = pow(B[i][j], 2);
            } else {
                C[i][j] = sqrt(B[i][j]);
            }
        }
    }

    //Imprimir matriz A
    cout << "Matriz A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    //Imprimir matriz B
    cout << "\nMatriz B: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    //Imprimir matriz C
    cout << "\nMatriz C: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}