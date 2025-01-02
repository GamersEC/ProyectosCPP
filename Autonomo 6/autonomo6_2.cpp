#include <iostream>

using namespace std;

int main() {

  int productos;

  cout << "Ingrese la cantidad de productos: ";
  cin >> productos;

  float preciosTienda1[productos];
  float preciosTienda2[productos];

  cout << "Ingrese los precios de la tienda 1:\n" << endl;
  for (int i = 0; i < productos; i++) {
    cout << "Precio del producto " << i + 1 << ": $";
    cin >> preciosTienda1[i];
  }

  cout << "Ingrese los precios de la tienda 2:\n" << endl;
  for (int i = 0; i < productos; i++) {
    cout << "Precio del producto " << i + 1 << ": $";
    cin >> preciosTienda2[i];
  }

  //Comparacion de precios entre la tienda 1 y 2
  cout << "\nComparacion de precios entre la tienda 1 y 2:\n" << endl;
  for (int i = 0; i < productos; i++){
    cout << "El producto " << i + 1 << ": ";
    if (preciosTienda1[i] < preciosTienda2[i]){
      cout << "La tienda 1 tiene el mejor precio" << endl;
    } else if (preciosTienda1[i] > preciosTienda2[i]){
      cout << "La tienda 2 tiene el mejor precio" << endl;
    } else {
      cout << "Ambas tiendas tienen el mismo precio" << endl;
    }

  }

  return 0;
}