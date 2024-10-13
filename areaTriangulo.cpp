#include <iostream>
using namespace std;

int main(){
    float base, altura, area;
    cout << "Ingrese la base" << endl;
    cin >> base;
    cout << "Ingrese la altura" << endl;
    cin >> altura;
    area = (base*altura)/2;
    cout << "El area de su triangulo es: " << area <<endl;
    
    //operadores
    cout << "Operador ternario: " << (area>=10?"Area correcta":"Incorrecto") << endl;
    cout << "Uso del AND: " << (base==2 && altura>0?"Esta bien":"Esta mal") << endl;
    cout << "Uso del OR: " << (base==2 || altura!=0?"Esta bien":"Esta mal") << endl;// != --> diferente 

    cin.get();
    return 0;
}