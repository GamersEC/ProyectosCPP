#include <iostream>
using namespace std;

int main(){

    int n, i, opcion;
    float num1, num2, resultado;
    cout << "Ingrese la cantidad de veces que quiere repetir" << endl;
    cin >> n;

    for (i=0;i<=n;i++)
    {
        cout << "Menu de operaciones matematicas" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Resta" << endl;
        cin >> opcion;

        if(opcion >=1 && opcion <=5)
        {
            cout << "Ingrese el primer valor" << endl;
            cin >> num1;
            cout << "Ingrese el segundo valor" << endl;
            cin >> num2;
        }
        
        switch(opcion)
        {
            case 1:
            {
                
            }
            case 2:
            {

            }
            case 3:
            {

            }
            case 4:
            {

            }
            case 5:
            {

            }
            default:
            {
                cout << "Opcion ingresada no valida" << endl;
            }
        }
    }


    return 0;
}