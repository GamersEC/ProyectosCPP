#include <iostream>
#include <string>

using namespace std;

const int MAX_EMPLEADOS = 100;

//Funcion agregar empleado
void agregarEmpleado(string nombres[], float salarios[], int &cantidad){
  if (cantidad >= MAX_EMPLEADOS){
    cout << "No se pueden agregar mas empleados" << endl;
    return;
  }
  cout << "Ingrese el nombre del empleado: ";
  cin.ignore();
  getline (cin, nombres[cantidad]);
  cout << "Ingrese el salario del empleado: $";
  cin >> salarios[cantidad];
  cantidad++;
  cout << "Empleado agregado correctamente" << endl;
}


//Funcion modificar salario
void modificarSalario(string nombres[], float salarios[], int cantidad){
  string nombre;
  cout << "Ingrese el nombre del empleado a modificar el salario: ";
  cin.ignore();
  getline (cin, nombre);
  for(int i = 0; i < cantidad; i++){
    if (nombres[i] == nombre){
      cout << "Ingrese el nuevo salario: $";
      cin >> salarios[i];
      cout << "Salario modificado correctamente" << endl;
      return;
    }
  }
  cout << "Empleado no encontrado" << endl;
}


//Funcion para eliminar empleado
void eliminarEmpleado(string nombres[], float salarios[], int &cantidad){

  string nombre;
  cout << "Ingrese el nombre del empleado a eliminar: ";
  cin.ignore();
  getline (cin, nombre);
  for (int i = 0; i < cantidad; i++){
    if (nombres[i] == nombre){
      for (int j = i; j < cantidad - 1; j++){
        nombres[j] = nombres[j + 1];
        salarios[j] = salarios[j + 1];
      }
      cantidad --;
      cout << "Empleado eliminado correctamente" << endl;
      return;
    }
  }
  cout << "Empleado no encontrado" << endl;
}


//Funcion para buscar empleado
void buscarEmpleado(string nombres[], float salarios[], int cantidad){
  string nombre;
  cout << "Ingrese el nombre del empleado que desea buscar: ";
  cin.ignore();
  getline (cin, nombre);
  for (int i = 0; i < cantidad; i++){
    if (nombres[i] == nombre){
      cout << "Nombre: " << nombres[i] << endl;
      cout << "Salario: $" << salarios[i] << endl;
      return;
    }
  }
  cout << "Empleado no encontrado" << endl;
}



int main(){

  int opciones = 0, cantidad = 0;
  string nombres[MAX_EMPLEADOS];
  float salarios[MAX_EMPLEADOS];

  while (opciones != 5){
    cout << "1. Agregar nuevo empleado" << endl;
    cout << "2. Modificar el salario de un empleado" << endl;
    cout << "3. Eliminar un empleado" << endl;
    cout << "4. Buscar empleado por nombre" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opciones;

    switch(opciones){
      case 1:
        agregarEmpleado(nombres, salarios, cantidad);
        break;
      case 2:
        modificarSalario(nombres, salarios, cantidad);
        break;
      case 3:
        eliminarEmpleado(nombres, salarios, cantidad);
        break;
      case 4:
        buscarEmpleado(nombres, salarios, cantidad);
        break;
      case 5:
        cout << "Saliendo..." << endl;
        break;
      default:
        cout << "Opcion invalida" << endl;
    }
  }

  return 0;
}