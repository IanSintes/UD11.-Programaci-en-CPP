#include <iostream>
#include <vector>
using namespace std;

// Funció que comprova l'ordre d'una llista
string esta_ordenada(const vector<int>& llista) {
    bool ascendent = true;
    bool descendent = true;

    for (size_t i = 1; i < llista.size(); i++) {
        if (llista[i] > llista[i - 1]) {
            descendent = false;
        }
        if (llista[i] < llista[i - 1]) {
            ascendent = false;
        }
    }

    if (ascendent) return "Està ordenada de forma ascendent.";
    else if (descendent) return "Està ordenada de forma descendent.";
    else return "No està ordenada.";
}

int main() {
    vector<int> llista1 = {3, 2, 1};
    vector<int> llista2 = {4, 5, 6};
    vector<int> llista3 = {1, 3, 2};

    cout << "Llista 1: " << esta_ordenada(llista1) << endl;
    cout << "Llista 2: " << esta_ordenada(llista2) << endl;
    cout << "Llista 3: " << esta_ordenada(llista3) << endl;

    return 0;
}