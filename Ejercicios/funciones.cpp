#include <iostream>
using namespace std;

//plantilla de una funcion para contar los divisores de un numero


template <typename P>
int contardivisores(P &numero){

    int contadora = 0;
    for (int i = 1; i <= numero; i++)
    {
        if(numero%i==0)
    {
        contadora++;
    }
    }
    
    return contadora;
}

int main(){

    int numero, resultado;
    cout << "Ingrese un numero para contar divisores: ";
    cin >> numero;
    resultado = contardivisores(numero);
    cout << "El resultado del conteo de divisores es: " << resultado << endl;

    cin.get();
    return 0;
}