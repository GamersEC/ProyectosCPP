#include <iostream>
using namespace std;

int main()
{
int year;
cout << "Ingresa un año para saber si es bisiesto: "; cin >> year;

if(year%4==0)
{
    cout << "El año es bisiesto" << endl;

}
else 
{
    cout << "El año no es bisiesto" << endl;
}

cin.get();
return 0;
}