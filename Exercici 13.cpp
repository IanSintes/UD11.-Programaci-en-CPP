#include <iostream>
#include <string>
using namespace std;

// Funció que inverteix una cadena
string invertir(const string& text) {
    string invertida = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        invertida += text[i];
    }
    return invertida;
}

int main() {
    // Exemple fix
    string frase = "Soc del Ramis";
    cout << "Frase original: " << frase << endl;
    cout << "Frase invertida: " << invertir(frase) << endl;

    // Prova amb entrada de l'usuari
    string entrada;
    cout << "\nIntrodueix una cadena per invertir: ";
    getline(cin, entrada);

    cout << "Invertida: " << invertir(entrada) << endl;

    return 0;
}