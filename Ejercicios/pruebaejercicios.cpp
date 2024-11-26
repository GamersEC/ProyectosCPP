/*Realizar un programa en C++ que le permita al usuario escoger las siguientes
opciones:
a) Calcular el máximo común divisor (MCD) de dos números (recursividad).
b) Sumar los múltiplos de un número en un rango dado (bucle for).
c) Calcular el producto de los dígitos de un número usando un bucle dowhile.
d) Contar cuántos números pares existen en un rango dado (bucle for).
e) Implementar la sobrecarga de funciones para calcular el área de un
círculo (dado el radio) y de un rectángulo (dadas la base y la altura).*/


#include<iostream>
#include<cmath>
using namespace std;
//Caso A
int mcdRecursivo(int a, int b) {
  if (b==0) {
    return a;
  }
  return mcdRecursivo(b, a % b);
}
//Caso B
int sumarMultiples(int n1, int inicio, int fin) {
  int suma = 0;
  for (int i = inicio; i <= fin; i++) {
    if (i % n1 == 0) {
      suma += i;
    }
  }
  return suma;
}
//Calcular area circulo
double area(double radio) {
  float pi  =3.1416;
  return pi*pow(radio,2);
}

//Calcular area rectangulo
double area(double base, double altura) {
  return base*altura;
}

//Funcion principal
int main() {
  int opc, n1, n2, inicio, fin, producto, menuarea;
  float base, altura, radio;

    cout<<"*** Escoge una opcion ***"<<endl;
    cout<<"1. Calcular el maximo comun divisor de dos numeros recursividad "<<endl;
    cout<<"2. Sumar los multiplos de un numero en un rango dado bucle for."<<endl;
    cout<<"3. Calcular el producto de los digitos de un numero usando un bucle dowhile."<<endl;
    cout<<"4. Contar cuantos numeros pares existen en un rango dado bucle for."<<endl;
    cout<<"5. Calcular el area de un circulo"<<endl;
    cout<<"6.Salir"<<endl;
    cout<<"opcion:"; cin>>opc;

    switch(opc)
    {
      case 1: {
        cout << "Ingrese el primer valor: ";
        cin>>n1;
        cout << "Ingrese el segundo valor: ";
        cin>>n2;
        cout << "El Maximo Comun divisor (MCD) es: " << mcdRecursivo(n1,n2) << endl;
      }break;
      case 2:{
        cout << "Ingrese el numero: ";
        cin>>n1;
        cout<<"Ingrese el inicio y fin del rango: ";
        cin >> inicio >> fin;
        cout<<"La suma de los multiplos de: "<<n1<<" es: "<<sumarMultiples(n1,inicio,fin)<<endl;
      } break;
      case 3: {
        cout << "Ingrese el numero para calcular el producto de sus digitos: ";  cin>>n1;
        if (n1 == 0)
        {
          producto = 0; // En caso de que el número sea 0, el producto también es 0.
        } else
        {
          do
          {
            int digito = n1 % 10;  // Obtenemos el último dígito.
            producto *= digito;     // Multiplicamos el producto por el dígito.
            n1 /= 10;              // Eliminamos el último dígito del número.
          } while (n1 > 0);           // Continuamos mientras haya dígitos en el número.
        }
        cout << "El producto de los digitos es: " << producto << endl;
      } break;

      case 4: {
        int contador = 0;
        cout << "Ingrese el inicio del rango: "; cin >> inicio;
        cout << "Ingrese el fin del rango: "; cin >> fin;
        for (int i = inicio; i <= fin; i++)
          {
            if(i % 2 == 0)
            {
              contador++;
            }
          }
        cout <<"En total hay: " << contador <<" numeros pares"<< endl;
      }break;

      case 5: {
        cout << "Que area desea calcular" << endl;
        cout << "1. Area del circulo" << endl;
        cout << "2. Area del rectangulo" << endl;
        cin >> menuarea;
        if (menuarea == 1) {
          cout << "Ingrese el radio del circulo: "; cin >> radio;
          cout << "El area del circulo es: " << area(radio);
        }else if (menuarea == 2) {
          cout << "Ingrese la base del rectangulo: "; cin >> base;
          cout << "Ingrese la altura del rectangulo: "; cin >> altura;
          cout << "El area del rectangulo es: " << area(base,altura);
        } else
          cout << "Opcion no valida...";
      } break;

      default: cout<<"El numero es invalido"<<endl;
    }
  return 0;
}