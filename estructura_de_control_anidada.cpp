#include <iostream>
using namespace std;

int main(){

    string nombre;
    int cedula;
    char paralelo;
    int carrera;
    cout << "Ingrese su nombre:" << endl;
    cin >> nombre;
    cout << "Ingrese su numero de cedula:" << endl;
    cin >> cedula;
    cout << "Ingrese su paralelo:" << endl;
    cin >> paralelo;
    cout << "Seleccione su carrera" << endl;
    cout << "1.Ingenieria en Ciencia de datos e IA" << endl;
    cout << "2.Ingenieria Civil" << endl;
    cout << "3.Ingenieria de Software" << endl;
    cin >> carrera;

    return 0;
}