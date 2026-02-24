#include <iostream>
#include <vector>
#include <string>
#include <cctype> // per tolower
using namespace std;

// Funció que compta quants noms comencen per 'a'
int nums_que_comencen_per(const vector<string>& noms) {
    int comptador = 0;

    for (const string& nom : noms) {
        if (!nom.empty() && tolower(nom[0]) == 'a') {
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

    int resultat = nums_que_comencen_per(llistaNoms);

    cout << "Nombre de noms que comencen per 'a': " << resultat << endl;

    return 0;
}