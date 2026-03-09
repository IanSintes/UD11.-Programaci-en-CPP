#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Funció que crea un diccionari amb clau=valor i valor=índex
map<string, int> crear_diccionari(const vector<string>& llista) {
    map<string, int> diccionari;

    for (size_t i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }

    return diccionari;
}

int main() {
    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};

    map<string, int> diccionari = crear_diccionari(llista);

    cout << "Diccionari creat:" << endl;
    for (const auto& parell : diccionari) {
        cout << parell.first << ": " << parell.second << endl;
    }

    return 0;
}