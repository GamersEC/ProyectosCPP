#include <iostream>
using namespace std;

//Funcion para calcular el promedio
float totalPromedio(int totalNotas, float suma){
    return suma / totalNotas;
}

int main(){
int totalNotas = 0;
char opcion;
float nota, promedio, sumaNotas = 0.0;

//Bucle de repeticion para ingresar las notas
    do {

        //Solicitar la nota
        cout << "Ingrese una nota: ";
        cin >> nota;

        //Acumular la cantidad de notas ingresadas
        sumaNotas += nota;
        totalNotas++;

        //Preguntar si desea ingresar otra nota
        do {
            cout << "¿Desea ingresar otra nota? (S/n): ";
            cin >> opcion;

            //Condicional en caso de ingresar un caracter no valido
            if (opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N') {
                cout << "Entrada no valida. Por favor, responda 's' para sí o 'n' para no" << endl;
            }

        //Repetir la pregunta de si desea volver a ingresar la nota
        } while (opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N');

    //Opcion mientras el usuario de una respuesta positiva
    } while (opcion == 's' || opcion == 'S');
    
    //Imprimir el resultado
    promedio = totalPromedio(totalNotas, sumaNotas);
    cout << "El promedio de las " << totalNotas << " notas ingresadas es: " << promedio << endl;


    return 0;
}