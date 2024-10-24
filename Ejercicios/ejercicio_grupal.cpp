#include <iostream>
using namespace std;

int main (){
    int i, n, serie;
    cout << "Ingrese la cantidad de numeros de la serie: ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        serie = 2 * i;
        if (i % 2 == 1)
        {
            serie = -serie;
        }
        cout << serie << "" << endl;
    }

    return 0;
}