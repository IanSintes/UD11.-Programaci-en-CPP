#include <iostream>
#include <iomanip> // per setw
#include <string>
using namespace std;

int main() {
    const int N = 4; // nombre de persones
    string noms[N];
    int any_naixement[N];
    int anys_actual[N];
    int any_actual;

    cout << "Introdueix l'any actual: ";
    cin >> any_actual;

    // Entrada de dades de les 4 persones
    for (int i = 0; i < N; i++) {
        cout << "Nom de la persona " << i+1 << ": ";
        cin >> noms[i];
        cout << "Any de naixement de " << noms[i] << ": ";
        cin >> any_naixement[i];

        anys_actual[i] = any_actual - any_naixement[i]; // calcula edat aquest any
    }

    // Imprimir dades tabulades
    cout << "\n"
         << left << setw(15) << "Nom" 
         << setw(15) << "Data naixement" 
         << setw(10) << "Edat" << endl;
    
    cout << "--------------------------------------\n";

    for (int i = 0; i < N; i++) {
        cout << left << setw(15) << noms[i]
             << setw(15) << any_naixement[i]
             << setw(10) << anys_actual[i] << endl;
    }

    return 0;
}