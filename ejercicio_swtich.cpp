#include <iostream>
using namespace std;

int main(){
    float area;
    char selector;
    cout << "Seleccione la opcion que desea realizar:" << endl;
    cout << "C. Area de ciruclo" << endl;
    cout << "R. Area de rectangulo" <<endl;
    cout << "T. Area del triangulo" << endl;
    cin >> selector;

    switch(selector)
    {
        case 'c':
        case 'C':
        {
            float radio;
            cout << "Calculo del area del circulo" << endl;
            cout << "Radio: ";
            cin >> radio;
            area = 3.14159*radio;
            cout << "El area del ciruclo es: " << area << endl;
            break;

        }
        case 't':
        case 'T':
        {
            float base, altura;
            cout << "Calculo del area del triangulo" << endl;
            cout << "Base: ";
            cin >> base;
            cout << "Altura: ";
            cin >> altura;
            area = (base*altura)/2;
            cout << "El area del triangulo es: " << area << endl;
            break;

        }
        default:
        cout << "Opcion no valida" << endl;
    }

    cin.get();
    return 0;
}