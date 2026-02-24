#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna l'índex d'una paraula en una llista ordenada
int index_paraula(const vector<string>& llista, const string& paraula) {
    for (size_t i = 0; i < llista.size(); i++) {
        if (llista[i] == paraula) return i;
    }
    return -1; // no trobat
}

int main() {
    vector<string> llista = {"aigua", "casa", "gat", "gos", "llibre"};
    string buscar;

    cout << "Introdueix la paraula a buscar: ";
    cin >> buscar;

    int index = index_paraula(llista, buscar);

    if (index != -1) {
        cout << "La paraula '" << buscar << "' es troba a l'índex: " << index << endl;
    } else {
        cout << "La paraula '" << buscar << "' no està a la llista." << endl;
    }

    return 0;
}