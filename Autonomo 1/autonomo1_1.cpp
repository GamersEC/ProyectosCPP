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
    cout << "Ingresa la inicial de tu nombre: ";
    cin >> inicial;
    cout << "Ingresa tu primer nombre: ";
    cin >> nombre;
    cout << "Ingresa tu primer apellido: ";
    cin >> apellido; 
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Eres estudiante (Si/No): ";
    cin >> estudiante;

    //Salida en terminal
    cout << "Estos son los datos que ingresaste" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << "m" << endl;
    cout << "Estudiante: " << estudiante << endl;

    cin.get();
    return 0;
}