#include <iostream>

using namespace std;

void imprimir_arreglo(int array[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertar_elemento(int array[], int& tam) {
    int nuevo_elemento, posicion;
    cout << "Ingrese el nuevo elemento: ";
    cin >> nuevo_elemento;
    cout << "Ingrese la posición donde se insertará el nuevo elemento: ";
    cin >> posicion;

    // Validamos si la posición es válida
    if (posicion < 0 || posicion > tam) {
        cout << "No existe la posición donde se quiere insertar." << endl;
        // Imprime el arreglo original sin cambios
        cout << "El arreglo original es: " << endl;
        imprimir_arreglo(array, tam);
    } else {
        // Aumentamos el tamaño del arreglo
        tam++;

        // Desplazamos los elementos hacia la derecha
        for (int i = tam - 1; i > posicion; i--) {
            array[i] = array[i - 1];
        }
        array[posicion] = nuevo_elemento;

        // Imprimimos el arreglo actualizado
        cout << "El arreglo con el nuevo elemento es: " << endl;
        imprimir_arreglo(array, tam);
    }
}

void modificar_elemento(int array[], int tam) {
    int posicion, nuevo_valor;
    cout << "Ingrese la posición del elemento que desea modificar: ";
    cin >> posicion;

    //Validamos si la posición es válida
    if (posicion < 0 || posicion >= tam) {
        cout << "La posición no es válida." << endl;
    } else {
        cout << "Ingrese el nuevo valor para el elemento en la posición " << posicion << ": ";
        cin >> nuevo_valor;
        array[posicion] = nuevo_valor;

        //Imprimimos el arreglo actualizado
        cout << "El arreglo con el elemento modificado es: " << endl;
        imprimir_arreglo(array, tam);
    }
}

void eliminar_elemento(int array[], int& tam) {
    int posicion;
    cout << "Ingrese la posición del elemento que desea eliminar: ";
    cin >> posicion;

    //Validamos si la posición es válida
    if (posicion < 0 || posicion >= tam) {
        cout << "La posición no es válida." << endl;
    } else {
        //Desplazamos los elementos a la izquierda para eliminar el elemento
        for (int i = posicion; i < tam - 1; i++) {
            array[i] = array[i + 1];
        }

        //Reducimos el tamaño del arreglo
        tam--;

        //Imprimimos el arreglo actualizado
        cout << "El arreglo después de la eliminación es: " << endl;
        imprimir_arreglo(array, tam);
    }
}

void burbuja (int array[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

int main() {
    int tam;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;

    int array[tam];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> array[i];
    }

    int opcion;
    do {
        // Menú de opciones
        cout << "\nMenu de opciones: \n";
        cout << "1. Insertar un nuevo elemento en una posición\n";
        cout << "2. Modificar un elemento en una posición\n";
        cout << "3. Ver el arreglo actual\n";
        cout << "4. Eliminar un elemento en una posición\n";
        cout << "5. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                insertar_elemento(array, tam);
                break;
            case 2:
                modificar_elemento(array, tam);
                break;
            case 3:
                cout << "El arreglo actual es: " << endl;
                imprimir_arreglo(array, tam);
            cout << "El arreglo ordenado es: " << endl;
            burbuja(array, tam);
            imprimir_arreglo(array, tam);
                break;
            case 4:
                eliminar_elemento(array, tam);
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor intente nuevamente." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}