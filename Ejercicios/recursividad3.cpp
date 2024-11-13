#include <iostream>
using namespace std;

// Serie que empieza con 0 y 1 = 3er término es el doble del primero
// 0, 1, 2, 5, 12, ...

void serie(int n) {
    int a = 0, b = 1;  // Los dos primeros términos

    if (n <= 0) {
        return;  // Si n es 0 o negativo, no hacemos nada
    }

    cout << a << " ";  // Imprimimos el primer término

    if (n == 1) {
        return;  // Si solo se pidió un término, terminamos
    }

    cout << b << " ";  // Imprimimos el segundo término

    // Generamos los siguientes términos de la serie
    for (int i = 3; i <= n; i++) {
        int siguiente = a + b * 2;  // El 3er término es el doble del primero
        cout << siguiente << " ";   // Imprimimos el siguiente término
        a = b;  // Actualizamos 'a' al valor de 'b'
        b = siguiente;  // 'b' se convierte en el siguiente valor
    }
}

int main() {
    int n;
    cout << "Ingrese el número de términos que desea generar: ";
    cin >> n;
    serie(n);  // Llamada a la función para generar la serie
    return 0;
}