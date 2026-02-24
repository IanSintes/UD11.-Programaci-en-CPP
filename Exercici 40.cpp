#include <iostream>
#include <vector>
using namespace std;

// Funció que elimina primer i últim element
vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> nova;

    if (llista.size() <= 2) {
        // Si la llista té 2 o menys elements, la nova queda buida
        return nova;
    }

    // Afegim els elements des del segon fins al penúltim
    for (size_t i = 1; i < llista.size() - 1; i++) {
        nova.push_back(llista[i]);
    }

    return nova;
}

int main() {
    vector<int> llista = {10, 20, 30, 40, 50};

    cout << "Llista original: ";
    for (int x : llista) cout << x << " ";
    cout << endl;

    vector<int> resultat = eliminarcapicua(llista);

    cout << "Llista després d'eliminar primer i últim: ";
    for (int x : resultat) cout << x << " ";
    cout << endl;

    return 0;
}