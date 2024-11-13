#include <iostream>
using namespace std;

    int suma (int n){

        if (n==0)
        {
          return 0;
        
        } else
        {
          return n+suma(n-1);
        }
    }

int main(){
  
  int numero;
  cout << "Ingrese un numero: ";
  cin >> numero;

  cout << "la suma de los " << numero << "numeros es: " << suma(numero);
  cin.get();
  return 0;
}