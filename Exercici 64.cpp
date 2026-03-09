#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Funció que llegeix un fitxer amb control d'errors
void llegir_fitxer(const string& nom_fitxer) {
    ifstream fitxer(nom_fitxer);

    if (!fitxer.is_open()) {
        cout << "Error: No es pot obrir el fitxer '" << nom_fitxer << "'." << endl;
        return;
    }

    cout << "Contingut del fitxer '" << nom_fitxer << "':" << endl;

    string linia;
    while (getline(fitxer, linia)) {
        cout << linia << endl;
    }

    fitxer.close();
}

int main() {
    string nom;
    cout << "Introdueix el nom del fitxer a llegir: ";
    cin >> nom;

    llegir_fitxer(nom);

    return 0;
}