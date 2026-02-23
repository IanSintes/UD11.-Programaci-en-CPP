#include <iostream>
#include <string>
#include <cctype> // per isupper
using namespace std;

// Funció que compta majúscules en una cadena
int comptarMajuscules(const string& text) {
    int comptador = 0;
    for (char c : text) {
        if (isupper(c)) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    // Proves fixes
    string text1 = "Hola Mon";
    string text2 = "casa";
    string text3 = "C++ Es Genial";

    cout << "\"" << text1 << "\" té " << comptarMajuscules(text1) << " majúscules." << endl;
    cout << "\"" << text2 << "\" té " << comptarMajuscules(text2) << " majúscules." << endl;
    cout << "\"" << text3 << "\" té " << comptarMajuscules(text3) << " majúscules." << endl;

    // Prova amb entrada de l'usuari
    string entrada;
    cout << "\nIntrodueix una cadena: ";
    getline(cin, entrada);

    cout << "La cadena té " << comptarMajuscules(entrada) << " majúscules." << endl;

    return 0;
}