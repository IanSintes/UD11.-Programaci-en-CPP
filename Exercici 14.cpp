#include <iostream>
#include <string>
#include <cctype> // per tolower
using namespace std;

// Funció que comprova si una cadena és un palíndrom
bool es_palindrom(const string& text) {
    int inici = 0;
    int fi = text.length() - 1;

    while (inici < fi) {
        // Convertim a minúscula per ignorar majúscules
        if (tolower(text[inici]) != tolower(text[fi]))
            return false;
        inici++;
        fi--;
    }
    return true;
}

int main() {
    // Proves fixes
    string paraula1 = "radar";
    string paraula2 = "ara";
    string paraula3 = "casa";

    cout << paraula1 << ": " << es_palindrom(paraula1) << endl; // 1 (true)
    cout << paraula2 << ": " << es_palindrom(paraula2) << endl; // 1 (true)
    cout << paraula3 << ": " << es_palindrom(paraula3) << endl; // 0 (false)

    // Prova amb entrada de l'usuari
    string entrada;
    cout << "\nIntrodueix una paraula: ";
    cin >> entrada;

    if (es_palindrom(entrada))
        cout << "Es un palindrom." << endl;
    else
        cout << "No es un palindrom." << endl;

    return 0;
}