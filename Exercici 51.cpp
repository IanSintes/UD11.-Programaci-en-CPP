#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que mostra paraules en posicions parelles
void elements_parells(const vector<string>& llista) {
    cout << "Paraules en posicions parelles: ";

    for (size_t i = 1; i < llista.size(); i += 2) {
        cout << llista[i] << " ";
    }

    cout << endl;
}

int main() {
    vector<string> paraules = {"gat", "gos", "casa", "cotxe", "sol", "lluna"};

    elements_parells(paraules);

    return 0;
}