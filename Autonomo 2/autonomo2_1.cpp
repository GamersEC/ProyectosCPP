#include <iostream>

using namespace std;

int main()
{

    //Variables locales
    int calificacion, antiguedad;
    float salario, bono;
    string clasificacion;

    //Solicitar datos
    cout << "Ingrese la calificacion de desempeño (0-100): "; cin >> calificacion;
    cout << "Ingrese la antiguedad en la empresa en años: "; cin >> antiguedad;
    cout << "Ingrese el salario: $"; cin >> salario;

    //Condicional para clasificar el desempeño
    if (calificacion>=90 && calificacion<=100)
    {
        clasificacion = "Excelente";
    } else if (calificacion>=79 && calificacion < 90)
    {
        clasificacion = "Bueno";
    } else
    {
        clasificacion = "Necesita Mejora";
    }

    //Condicional para el bono segun la antiguedad
    if (antiguedad>3)
    {
      bono=salario*0.10;
    } else if (antiguedad>1 && antiguedad<3)
    {
      bono=salario*0.05;
    } else
    {
    bono=0.00;
    }
    
    // Mostrar resultados en terminal
    cout << "Clasificación del desempeño: " << clasificacion << endl;
    cout << "Bono: $" << bono << endl;
    cout << "Salario total: " << salario+bono << endl;


    cin.get();
    return 0;
}