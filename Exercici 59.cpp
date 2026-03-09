#include <iostream>
#include <vector>
using namespace std;

// Funció que compta elements on valor == índex
int coincidencia_valor_index(const vector<int>& llista) {
    int comptador = 0;

    for (size_t i = 0; i < llista.size(); i++) {
        if (llista[i] == static_cast<int>(i)) {
            comptador++;
        }
    }

    return comptador;
}

int main() {
    vector<int> llista = {0, 2, 3, 3, 4};

    int total = coincidencia_valor_index(llista);

    cout << "Nombre d'elements on valor coincideix amb índex: " << total << endl;

    return 0;
}