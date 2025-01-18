#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n;

  //Ingresar el tamaño de la matriz
  cout << "Ingresa el tamanio de la matriz cuadrada (nxn): ";
  cin >> n;

  //Condicional para que la matriz sea positiva
  if (n <= 0){
    cout << "El tamanio de la matriz debe ser mayor a 0" << endl;
    return 1;
  }

  //Declarar la matriz
  vector<vector<int>> matriz(n, vector<int>(n));

  //Datos de la matriz
  cout << "Ingresa los elementos de la matriz: " << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> matriz[i][j];
    }
  }

  //Numero mayor de la matriz
  int mayor = matriz[0][0];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (matriz[i][j] > mayor){
        mayor = matriz[i][j];
      }
    }
  }

  //Imprimir Matriz
  cout << "Matriz ingresada:" << endl;
  for (int i = 0; i <n; i++){
    for (int j = 0; j < n; j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  //Imprimir el numero mayor
  cout << "El numero mayor de la matriz es: " << mayor << endl;

  //Generar tabla de multiplicar
  for (int i = 0; i <=12; i++){
    cout << mayor << " x " << i << " = " << mayor * i << endl;
  }

  return 0;
}