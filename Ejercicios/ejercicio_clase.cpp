#include <iostream>
using namespace std;

void llenarElementos(int n, int numeros[]){
  for (int i = 0; i < n; i++){
    cout << "Elemento " << i + 1 << ": ";
    cin >> numeros[i];
  }
}

void eliminarDuplicados(int &n, int numeros[]){
  int m = 0;
  int nuevoVector[n];

  for (int i = 0; i < n; i++){
    bool duplicado = false;

    for (int j = 0; j < m; j++)
      {
        if (numeros[i] == nuevoVector[j]){
          duplicado = true;
        }
      }
    if (!duplicado) {
      nuevoVector[m] = numeros[i];
      m++;
    }
  }

  for (int i=0; i<m; i++){
    numeros[i] = nuevoVector[i];
  }
  n=m;
}


void imprimir(int n, int numeros[]) {
  for (int i = 0; i < n; i++) {
    cout << numeros[i] << " ";
  }
}


int main(){

  int n;
  cout << "Ingrese el tamaño del vector: ";
  cin >> n;

  int numeros[n];
  llenarElementos(n, numeros);
  eliminarDuplicados(n, numeros);
  imprimir(n, numeros);

  return 0;
}