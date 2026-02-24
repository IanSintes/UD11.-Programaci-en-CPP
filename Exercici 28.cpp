#include <iostream>
#include <string>
#include <cctype> // per tolower
using namespace std;

// Funció que compta les vocals
void comptar_vocals(const string& paraula) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (char c : paraula) {
        c = tolower(c); // Convertim a minúscula

        switch (c) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    cout << "Hi ha " << a << " a's, "
         << e << " e's, "
         << i << " i's, "
         << o << " o's i "
         << u << " u's." << endl;
}

int main() {
    // Exemple fix
    string paraula1 = "Ratapinyada";
    cout << "Paraula: " << paraula1 << endl;
    comptar_vocals(paraula1);

    // Prova amb entrada de l'usuari
    string entrada;
    cout << "\nIntrodueix una paraula: ";
    cin >> entrada;

    comptar_vocals(entrada);

    return 0;
}