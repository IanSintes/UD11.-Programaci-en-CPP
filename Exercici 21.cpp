#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que filtra paraules segons la longitud
vector<string> filtrar_paraules(const vector<string>& llista, int x) {
    vector<string> resultat;
    for (const string& paraula : llista) {
        if (paraula.length() > x) {
            resultat.push_back(paraula);
        }
    }
    return resultat;
}

int main() {
    // Exemple fix
    vector<string> paraules = {"Hola", "Ramis", "IES", "Paraula"};
    int x = 4;

    vector<string> filtrades = filtrar_paraules(paraules, x);

    cout << "Paraules amb més de " << x << " caràcters:" << endl;
    for (const string& p : filtrades) {
        cout << p << endl;
    }

    // Prova amb entrada de l'usuari
    int n;
    cout << "\nIntrodueix el nombre de paraules: ";
    cin >> n;

    vector<string> paraulesUsuari;
    string p;
    for (int i = 0; i < n; i++) {
        cout << "Paraula " << i+1 << ": ";
        cin >> p;
        paraulesUsuari.push_back(p);
    }

    int xUsuari;
    cout << "Introdueix el nombre de caracters mínim: ";
    cin >> xUsuari;

    vector<string> filtradesUsuari = filtrar_paraules(paraulesUsuari, xUsuari);

    cout << "Paraules filtrades:" << endl;
    for (const string& p : filtradesUsuari) {
        cout << p << endl;
    }

    return 0;
}