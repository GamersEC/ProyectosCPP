#include <iostream>
using namespace std;

int main ()
{
    //Declaracion de variables
    int edad;
    float altura;
    string nombre, apellido, estudiante;
    char inicial;

    //Preguntas al usuario
    cout << "Bienvenido, completa los siguientes datos" << endl;
    cout << "Ingresa la inicial de tu nombre" << endl;
    cin >> inicial;
    cout << "Ingresa tu primer nombre" << endl;
    cin >> nombre;
    cout << "Ingresa tu primer apellido" << endl;
    cin >> apellido; 
    cout << "Ingresa tu edad" << endl;
    cin >> edad;
    cout << "Ingrese su altura en metros" << endl;
    cin >> altura;
    cout << "Eres estudiante" << endl;
    cout << "Si/No" << endl;
    cin >> estudiante;

    //Salida en terminal
    cout << "Nombre: " << nombre << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << "m" << endl;
    cout << "Estudiante: " << estudiante << endl;

    cin.get();
    return 0;
}