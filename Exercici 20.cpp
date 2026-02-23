#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna la paraula més llarga d'una llista
string paraula_mes_llarga(const vector<string>& llista) {
    if (llista.empty()) {
        return ""; // Retorna cadena buida si la llista està buida
    }

    string mes_llarga = llista[0];
    for (const string& paraula : llista) {
        if (paraula.length() > mes_llarga.length()) {
            mes_llarga = paraula;
        }
    }
    return mes_llarga;
}

int main() {
    // Exemple fix
    vector<string> paraules = {"Hola", "Ramis", "IES", "Paraula"};
    cout << "La paraula més llarga és: " << paraula_mes_llarga(paraules) << endl;

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

    cout << "La paraula més llarga de la llista introduïda és: " 
         << paraula_mes_llarga(paraulesUsuari) << endl;

    return 0;
}