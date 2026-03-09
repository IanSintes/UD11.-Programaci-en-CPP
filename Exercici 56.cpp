#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna les paraules que comencen per una lletra donada
vector<string> paraules_per_lletra(const vector<string>& llista, char lletra) {
    vector<string> resultat;

    for (const string& paraula : llista) {
        if (!paraula.empty() && paraula[0] == lletra) {
            resultat.push_back(paraula);
        }
    }

    return resultat;
}

int main() {
    vector<string> llista = {"maria", "manta", "peu", "mà"};
    char lletra;

    cout << "Introdueix la lletra: ";
    cin >> lletra;

    vector<string> resultat = paraules_per_lletra(llista, lletra);

    cout << "Paraules que comencen per '" << lletra << "': ";
    for (const string& p : resultat) cout << p << " ";
    cout << endl;

    return 0;
}