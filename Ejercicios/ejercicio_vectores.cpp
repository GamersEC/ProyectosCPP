#include <iostream>
using namespace std;

void llenarElementos(int n, int numeros[]){
  for (int i = 0; i < n; i++){
    cout << "Elemento " << i + 1 << ": ";
    cin >> numeros[i];
  }
}

void resultado(int n, int numeros[]) {
  cout << "Cuadrados de los elementos:" << endl;
  for (int i = 0; i < n; i++) {
    int cuadrado = numeros[i] * numeros[i];
    cout << "El cuadrado de " << numeros[i] << " es: " << cuadrado << endl;
  }
}

int main() {
  int n;
  cout << "Ingrese el tamaño del vector: ";
  cin >> n;

  int numeros[n];
  llenarElementos(n, numeros);

  resultado(n, numeros);

  return 0;
}