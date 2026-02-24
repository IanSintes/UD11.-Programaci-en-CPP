#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Funció que llegeix un fitxer i retorna una llista de paraules
vector<string> crear_llista_fitxer(const string& nomFitxer) {
    vector<string> llista;
    ifstream fitxer(nomFitxer);

    if (!fitxer) {
        cout << "No s'ha pogut obrir el fitxer: " << nomFitxer << endl;
        return llista; // retorna llista buida
    }

    string paraula;
    while (fitxer >> paraula) {
        llista.push_back(paraula);
    }

    fitxer.close();
    return llista;
}

int main() {
    string nomFitxer;
    cout << "Introdueix el nom del fitxer: ";
    cin >> nomFitxer;

    vector<string> llista = crear_llista_fitxer(nomFitxer);

    if (!llista.empty()) {
        cout << "Llista de paraules llegides: ";
        for (const string& p : llista) cout << p << " ";
        cout << endl;
    }

    return 0;
}