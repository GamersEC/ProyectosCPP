#include <iostream>
using namespace std;

int main ()
{
    //Variables locales
    float calificacion, inasistencias;
    string resultado;

    //Solicitar datos
    cout<<"Ingresa la calificacion de tu examen"<<endl;
    cin>>calificacion;
    cout<<"Ingresa la cantidad de inasistencias"<<endl;
    cin>>inasistencias;

    //Condición con operador ternario
    resultado=(calificacion>=60 && inasistencias<=3)?"Aprobado":"Reprobado";
    
    //Salida en terminal del resultado
    cout<<"El estudiante ha: "<<resultado<<endl;

    cin.get();
    return 0;
}