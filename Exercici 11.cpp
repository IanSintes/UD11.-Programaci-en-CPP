#include <iostream>
using namespace std;

// Funció que comprova si un caràcter és vocal
bool esVocal(char c) {
    // Convertim a minúscula per simplificar
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || 
        c == 'o' || c == 'u')
        return true;
    else
        return false;
}

int main() {
    // Proves fixes
    cout << "a -> " << esVocal('a') << endl;
    cout << "E -> " << esVocal('E') << endl;
    cout << "x -> " << esVocal('x') << endl;
    cout << "U -> " << esVocal('U') << endl;

    // Prova amb entrada de l'usuari
    char lletra;
    cout << "\nIntrodueix un caracter: ";
    cin >> lletra;

    if (esVocal(lletra))
        cout << "Es una vocal." << endl;
    else
        cout << "No es una vocal." << endl;

    return 0;
}