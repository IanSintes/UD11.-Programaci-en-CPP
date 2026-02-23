#include <iostream>
#include <string>
using namespace std;

// Funció que crea una cadena amb un caràcter repetit n vegades
string crear_repetits(int n, char c) {
    string resultat = "";
    for (int i = 0; i < n; i++) {
        resultat += c;
    }
    return resultat;
}

int main() {
    // Exemple fix
    cout << "crear_repetits(5, 'a'): " << crear_repetits(5, 'a') << endl; // aaaaa

    // Prova amb entrada de l'usuari
    int n;
    char c;
    cout << "\nIntrodueix un numero: ";
    cin >> n;
    cout << "Introdueix un caràcter: ";
    cin >> c;

    cout << "Resultat: " << crear_repetits(n, c) << endl;

    return 0;
}