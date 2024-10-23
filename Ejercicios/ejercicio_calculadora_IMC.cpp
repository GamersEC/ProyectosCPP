#include <iostream>
#include <math.h> //libreria para poder usar pow
#include <iomanip> //libreria para usar setprecision para que muestre 2 decimales
using namespace std;

int main(){
    
    //variables
    float peso = 0;
    float altura = 0;
    float resultado = 0;

    cout << "Calcualdora de Indice de Masa Corporal (IMC)" << endl;
    cout << "Ingrese su peso en kilogramos" << endl;
    cin >> peso;
    cout << "ingrese su altura en metros" << endl;
    cin >> altura;

    resultado = peso/pow(altura,2);
    cout << "Su IMC es: " << setprecision(4) << resultado << endl;
    
    return 0;
}