#include <iostream>
#include <string>

using namespace std;

const int MAX_ESTUDIANTES = 100;

//Funcion para agregar un estudiante al registro
void agregarEstudiante (string nombre[], int edades[], int &cantidad){
  if (cantidad >= MAX_ESTUDIANTES){
    cout << "No se puede agregar mas estudiantes al registro" << endl;
    return;
  }
  cout << "Ingrese el nombre del estudiante: ";
  cin.ignore();
  getline(cin, nombre[cantidad]);
  cout << "Ingrese la edad del estudiante: ";
  cin >> edades[cantidad];
  cantidad++;
  cout << "Estudiante agregado correctamente!" << endl;
}


//Funcion para modificar un estudiante del registro
void modificarEstudiante(string nombres[], int edades[], int cantidad){
  string nombre;
  cout << "Ingrese el nombre del estudiante a modificar: ";
  cin.ignore();
  getline(cin, nombre);

  for (int i = 0; i < cantidad; i++){
    if (nombre == nombres[i]){
      cout << "Ingrese el nuevo nombre del estudiante: ";
      getline(cin, nombres[i]);
      cout << "Ingrese la nueva edad del estudiante: ";
      cin >> edades[i];
      cout << "Estudiante modificado correctamente!" << endl;
      return;
    }
  }
  cout << " No se encontro el estudiante"<< endl;
}


//Funcion para eliminar un estudiante del registro
void eliminarEstudiante (string nombres[], int edades[], int &cantidad){
  string nombre;
  cout << "Ingrese el nombre del estudiante a eliminar: ";
  cin.ignore();
  getline(cin, nombre);

  for (int i = 0; i < cantidad; i++){
    if (nombres[i] == nombre){
      for (int j = i; j < cantidad - 1; j++){
        nombres[j] = nombres[j + 1];
        edades[j] = edades[j + 1];
      }
      cantidad--;
      cout << "Estudiante eliminado correctamente!" << endl;
      return;
    }
  }
  cout << "No se encontro el estudiante" << endl;
}


//Funcion para buscar un estudiante por nombre
void buscarEstudiante(string nombres[], int edades[], int cantidad){
  string nombre;
  cout << "Ingrese el nombre del estudiante que desea buscar: ";
  cin.ignore();
  getline(cin, nombre);

  for (int i = 0; i < cantidad; i++){
    if (nombres[i] == nombre){
      cout << "Nombre: " << nombres[i] << endl;
      cout << "Edad: " << edades[i] << endl;
      return;
    }
  }
  cout << "No se encontro el estudiante" << endl;
}


int main (){

  //Variables
  int opcion, edades[MAX_ESTUDIANTES], cantidad = 0;
  string nombres[MAX_ESTUDIANTES];

  //Bucle de repetición para las opciones
  do {
    cout << "1. Agregar un nuevo estudiante" << endl;
    cout << "2. Modificar estudiante" << endl;
    cout << "3. Eliminar estudiante" << endl;
    cout << "4. Buscar un estudiante por nombre" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione la opcion: ";
    cin >> opcion;

     //Menu de opciones
    switch (opcion){
      case 1:
        agregarEstudiante(nombres, edades, cantidad);
        break;
      case 2:
        modificarEstudiante(nombres, edades, cantidad);
        break;
      case 3:
        eliminarEstudiante(nombres, edades, cantidad);
        break;
      case 4:
        buscarEstudiante(nombres, edades, cantidad);
        break;
      case 5:
        cout << "Saliendo del programa..." << endl;
        break;
      default:
        cout << "Opcion no valida" << endl;
    }
  } while (opcion != 5);

  return 0;
}