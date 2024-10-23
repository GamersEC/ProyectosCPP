#include <iostream>
using namespace std;

int main ()
{
    //Variables locales
    int numero1,numero2;
    string resultado;

    //Solicitar datos
    cout << "Ingrese el primer numero"<<endl;
    cin >> numero1;
    cout << "Ingrese el segundo numero"<<endl;
    cin >> numero2;

    //Incremento del primer numero
    cout << "Incremento del primer numero es: " << ++numero1 << endl;
    cout << "Decremento del primer numero es: " << --numero1 << endl;

    //Operador ternario para el segundo numero
    resultado=(numero2%2==0)?"es par":"es impar";
    cout << "El segundo numero es: "<< resultado << endl;


    cin.get();
    return 0;
}