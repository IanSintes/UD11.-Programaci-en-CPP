#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Funció que elimina duplicats i retorna nova llista
vector<int> elimina_duplicats(const vector<int>& llista) {
    vector<int> nova;
    set<int> vistos;

    for (int x : llista) {
        if (vistos.find(x) == vistos.end()) { // si no està vist abans
            nova.push_back(x);               // afegim a nova llista
            vistos.insert(x);                // marquem com vist
        }
    }

    return nova;
}

int main() {
    vector<int> llista = {1, 2, 3, 2, 4, 5, 3, 6};

    cout << "Llista original: ";
    for (int x : llista) cout << x << " ";
    cout << endl;

    vector<int> resultat = elimina_duplicats(llista);

    cout << "Llista sense duplicats: ";
    for (int x : resultat) cout << x << " ";
    cout << endl;

    return 0;
}