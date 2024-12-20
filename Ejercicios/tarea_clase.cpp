#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;

//Función para simular el movimiento de nieve
void mostrarNieve() {
    //Alto
    const int ancho = 80;
    //Ancho
    const int alto = 20;


    //Aleatoridad del fondo
    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        //Limpiar pantalla
        system("cls");

        //Mensaje
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                if (i == alto / 2 && j == ancho / 3) {
                    cout << "¡Feliz Navidad!";

                    //Posicion del texto
                    j += 12;
                } else {

                    //Se usa asteriscos como si fueran copos de nieve
                    if (rand() % 100 < 5) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }

        //Pausa de 100 milisegundos entre cada repeticion
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}


//Funcion principal
int main() {
    mostrarNieve();
    return 0;
}