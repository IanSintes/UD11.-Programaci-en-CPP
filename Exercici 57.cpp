#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que concatena dues llistes amb un connector
vector<string> concatena_llistes(const vector<string>& llista1, const vector<string>& llista2, const string& connector) {
    vector<string> resultat;
    size_t n = min(llista1.size(), llista2.size()); // evitem excedir llista més curta

    for (size_t i = 0; i < n; i++) {
        resultat.push_back(llista1[i] + connector + llista2[i]);
    }

    return resultat;
}

int main() {
    vector<string> llista1 = {"sub", "supra"};
    vector<string> llista2 = {"campió", "campiona"};
    string connector = "-";

    vector<string> resultat = concatena_llistes(llista1, llista2, connector);

    cout << "Llista concatenada: ";
    for (const string& s : resultat) cout << s << " ";
    cout << endl;

    return 0;
}