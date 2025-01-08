/*
 * Marcus Alexander Mayorga Martínez
 */

#include <iostream>

using namespace std;

const int MAX_PRODUCTOS = 100;

//Función para añadir un nuevo producto
void añadir_producto(string productos[], float precios[], int stock[], int& tam) {
    if (tam < MAX_PRODUCTOS) {
        cout << "Ingrese el nombre del producto: ";
        cin >> productos[tam];
        cout << "Ingrese el precio del producto: $";
        cin >> precios[tam];
        cout << "Ingrese la cantidad de stock del producto: ";
        cin >> stock[tam];
        tam++;
    } else {
        cout << "No se pueden agregar más productos, el arreglo esta lleno." << endl;
    }
}


//Función para buscar un producto por su nombre
void buscar_producto(string productos[], float precios[], int stock[], int tam) {
    string busqueda;
    bool encontrado = false;
    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> busqueda;

    for (int i = 0; i < tam; i++) {
        if (productos[i] == busqueda) {
            cout << "Producto encontrado: " << productos[i] << " | Precio: $" << precios[i] << " | Stock: " << stock[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "El producto no fue encontrado." << endl;
    }
}


//Función para modificar un producto
void modificar_producto(string productos[], float precios[], int stock[], int tam) {
    string busqueda;
    bool encontrado = false;
    cout << "Ingrese el nombre del producto a modificar: ";
    cin >> busqueda;

    for (int i = 0; i < tam; i++) {
        if (productos[i] == busqueda) {
            encontrado = true;
            bool seguir_modificando = true;
            while (seguir_modificando) {
                cout << "Producto encontrado: " << productos[i] << " | Precio: $" << precios[i] << " | Stock: " << stock[i] << endl;
                int opcion_modificar;
                cout << "¿Qué aspecto desea modificar?" << endl;
                cout << "1. Nombre del producto" << endl;
                cout << "2. Precio del producto" << endl;
                cout << "3. Stock del producto" << endl;
                cout << "4. Volver al menu anterior" << endl;
                cout << "Ingrese su opcion: ";
                cin >> opcion_modificar;

                switch (opcion_modificar) {
                    case 1:
                        cout << "Ingrese el nuevo nombre del producto: ";
                        cin >> productos[i];
                        break;
                    case 2:
                        cout << "Ingrese el nuevo precio del producto: $";
                        cin >> precios[i];
                        break;
                    case 3:
                        cout << "Ingrese la nueva cantidad de stock del producto: ";
                        cin >> stock[i];
                        break;
                    case 4:
                        seguir_modificando = false;
                        break;
                    default:
                        cout << "Opcion inválida. Intente nuevamente." << endl;
                }

                if (seguir_modificando) {
                    char respuesta;
                    cout << "¿Desea modificar otro aspecto de este producto? (s/n): ";
                    cin >> respuesta;

                    //Condicion para salir del ciclo
                    if (respuesta == 'n' || respuesta == 'N') {
                        seguir_modificando = false;
                    }
                }
            }
            break;
        }
    }

    if (!encontrado) {
        cout << "El producto no fue encontrado." << endl;
    }
}


//Función para eliminar un producto
void eliminar_producto(string productos[], float precios[], int stock[], int& tam) {
    string busqueda;
    bool encontrado = false;
    cout << "Ingrese el nombre del producto a eliminar: ";
    cin >> busqueda;

    for (int i = 0; i < tam; i++) {
        if (productos[i] == busqueda) {
            //Desplazar todos los productos y precios después del encontrado
            for (int j = i; j < tam - 1; j++) {
                productos[j] = productos[j + 1];
                precios[j] = precios[j + 1];
                stock[j] = stock[j + 1];
            }
            tam--;
            encontrado = true;
            cout << "Producto eliminado exitosamente." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "El producto no fue encontrado." << endl;
    }
}


//Función para imprimir todos los productos y precios
void mostrar_lista(string productos[], float precios[], int stock[], int tam) {
    cout << "Lista de productos:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "- Producto " << i + 1 << ": " << productos[i] << " | Precio: $" << precios[i] << " | Stock: " << stock[i] << endl;
    }
}

//Funcion principal
int main() {
    string productos[MAX_PRODUCTOS];
    float precios[MAX_PRODUCTOS];
    int stock[MAX_PRODUCTOS];
    int tam = 0;
    int opcion;

    //Ciclo do while para mostrar el menú de opciones
    do {
        cout << "\nMenu de opciones: \n";
        cout << "1. Añadir producto\n";
        cout << "2. Buscar producto\n";
        cout << "3. Modificar producto\n";
        cout << "4. Eliminar producto\n";
        cout << "5. Mostrar lista de productos\n";
        cout << "6. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                añadir_producto(productos, precios, stock, tam);
                break;
            case 2:
                buscar_producto(productos, precios, stock, tam);
                break;
            case 3:
                modificar_producto(productos, precios, stock, tam);
                break;
            case 4:
                eliminar_producto(productos, precios, stock, tam);
                break;
            case 5:
                mostrar_lista(productos, precios, stock, tam);
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 6);

    return 0;
}