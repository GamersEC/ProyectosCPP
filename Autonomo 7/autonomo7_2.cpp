#include <iostream>
#include <vector>

using namespace std;

int main(){

  const int tam = 4;

  //Declarar matrices
  vector<vector<double>> matriz1(tam, vector<double>(tam));
  vector<vector<double>> matriz2(tam, vector<double>(tam));
  vector<vector<double>> matrizSuma(tam, vector<double>(tam));

  //Elementos de la matriz 1
  cout << "Ingrese los valores de la matriz 1: " << endl;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      cin >> matriz1[i][j];
    }
  }

  //Elementos de la matriz 2
  cout << "Ingrese los elementos de la matriz 2: " << endl;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      cin >> matriz2[i][j];
    }
  }

  //Suma de matrices
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  //Resultado de las matrices
  cout << "\nMatriz 1:" << endl;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      cout << matriz1[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "\nMatriz 2:" << endl;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      cout << matriz2[i][j] << "\t";
    }
    cout << endl;
  }

  //Resultado Suma
  cout << "\nMatriz Suma:" << endl;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      cout << matrizSuma[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}