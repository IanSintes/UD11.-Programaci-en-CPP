#include <iostream>
#include <vector>
#include <cstdlib>   // per rand
#include <ctime>     // per time
#include <set>
using namespace std;

// Funció que comprova duplicats (de l'exercici 42)
bool hi_ha_duplicats(const vector<int>& llista) {
    set<int> vistos;
    for (int x : llista) {
        if (vistos.find(x) != vistos.end()) return true;
        vistos.insert(x);
    }
    return false;
}

// Funció que genera llista de 20 elements aleatoris 1-100
vector<int> llista_20_elements() {
    vector<int> llista;
    for (int i = 0; i < 20; i++) {
        llista.push_back(rand() % 100 + 1); // 1 a 100
    }
    return llista;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // inicialitzar aleatorietat

    vector<int> llista = llista_20_elements();

    cout << "Llista generada: ";
    for (int x : llista) cout << x << " ";
    cout << endl;

    if (hi_ha_duplicats(llista)) {
        cout << "La llista té elements duplicats." << endl;
    } else {
        cout << "La llista NO té elements duplicats." << endl;
    }

    return 0;
}