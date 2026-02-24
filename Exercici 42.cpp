#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Funció que comprova si hi ha duplicats
bool hi_ha_duplicats(const vector<int>& llista) {
    set<int> vistos;  // conjunt per guardar els elements únics

    for (int x : llista) {
        if (vistos.find(x) != vistos.end()) {
            // si ja estava, hem trobat un duplicat
            return true;
        }
        vistos.insert(x);
    }
    return false;
}

int main() {
    vector<int> llista1 = {1, 2, 3, 4, 5};
    vector<int> llista2 = {1, 2, 3, 2, 5};

    cout << "Llista 1: ";
    if (hi_ha_duplicats(llista1)) cout << "Hi ha duplicats." << endl;
    else cout << "No hi ha duplicats." << endl;

    cout << "Llista 2: ";
    if (hi_ha_duplicats(llista2)) cout << "Hi ha duplicats." << endl;
    else cout << "No hi ha duplicats." << endl;

    return 0;
}