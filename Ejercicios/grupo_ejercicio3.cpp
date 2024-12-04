#include <iostream>
#include <wchar.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    int votos[3] = {0, 0, 0},totalVotantes, voto;

    cout << "Ingrese el número de votantes: ";
    cin >> totalVotantes;

    for (int i = 0; i < totalVotantes; ++i) 
	{
        cout << "Votante " << i + 1 << ", elija un candidato (1, 2 o 3): ";
        cin >> voto;
        if (voto == 1) 
		{
            votos[0]++;
        } else if (voto == 2) 
		{
            votos[1]++; 
        } else if  (voto == 3) 
		{
            votos[2]++; 
        }
    }

    int ganador = 1; 
    if (votos[1] > votos[0] && votos[1] >= votos[2]) {
        ganador = 2; 
    }
    if (votos[2] > votos[0] && votos[2] > votos[1]) {
        ganador = 3; 
    }

    cout << "\nResultados de la elección:" << endl;
    cout << "Candidato 1: " << votos[0] << " votos" << endl;
    cout << "Candidato 2: " << votos[1] << " votos" << endl;
    cout << "Candidato 3: " << votos[2] << " votos" << endl;

    cout << "EL GANADOR ES EL CANDIDATO: " << ganador << endl;
    
    return 0;
}