#include <iostream>
#include <cmath>    // per pow
#include <iomanip>  // per setprecision
using namespace std;

int main() {
    double capitalInicial, interes, capitalFinal;
    int anys;

    // Demanem capital inicial amb rang 50.000€ - 800.000€
    do {
        cout << "Introdueix el capital inicial (50000€ - 800000€): ";
        cin >> capitalInicial;
        if (capitalInicial < 50000 || capitalInicial > 800000) {
            cout << "Error: capital fora de rang.\n";
        }
    } while (capitalInicial < 50000 || capitalInicial > 800000);

    // Demanem interès amb rang 0.5% - 13%
    do {
        cout << "Introdueix l'interès (%) (0.5 - 13): ";
        cin >> interes;
        if (interes < 0.5 || interes > 13) {
            cout << "Error: interès fora de rang.\n";
        }
    } while (interes < 0.5 || interes > 13);

    // Demanem anys amb rang 3 - 40
    do {
        cout << "Introdueix el nombre d'anys (3 - 40): ";
        cin >> anys;
        if (anys < 3 || anys > 40) {
            cout << "Error: anys fora de rang.\n";
        }
    } while (anys < 3 || anys > 40);

    // Càlcul del capital final
    capitalFinal = capitalInicial * pow(1 + interes/100.0, anys);

    cout << fixed << setprecision(2);
    cout << "Capital final després de " << anys << " anys: " 
         << capitalFinal << "€" << endl;

    return 0;
}