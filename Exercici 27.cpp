#include <iostream>
#include <vector>
#include <string>
#include <cctype> // per tolower
using namespace std;

// Funció que compta quants noms comencen per una lletra donada
int nums_que_comencen_per(const vector<string>& noms, char lletra) {
    int comptador = 0;
    lletra = tolower(lletra); // normalitzam la lletra

    for (const string& nom : noms) {
        if (!nom.empty() && tolower(nom[0]) == lletra) {
            comptador++;
        }
    }

    return comptador;
}

int main() {
    int n;
    cout << "Introdueix el nombre de noms: ";
    cin >> n;

    vector<string> llistaNoms;
    string nom;

    for (int i = 0; i < n; i++) {
        cout << "Nom " << i+1 << ": ";
        cin >> nom;
        llistaNoms.push_back(nom);
    }

    char lletra;
    cout << "Introdueix la lletra per la qual vols filtrar: ";
    cin >> lletra;

    int resultat = nums_que_comencen_per(llistaNoms, lletra);

    cout << "Nombre de noms que comencen per '" 
         << lletra << "': " << resultat << endl;

    return 0;
}