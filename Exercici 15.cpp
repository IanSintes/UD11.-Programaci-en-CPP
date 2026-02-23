#include <iostream>
#include <vector>
using namespace std;

// Funció que comprova si dues llistes tenen algun element en comú
bool superposicio(const vector<int>& llista1, const vector<int>& llista2) {
    for (int x : llista1) {
        for (int y : llista2) {
            if (x == y)
                return true; // trobat un element en comú
        }
    }
    return false; // no hi ha elements en comú
}

int main() {
    vector<int> llistaA = {1, 2, 3, 4};
    vector<int> llistaB = {5, 6, 7};
    vector<int> llistaC = {3, 8, 9};

    cout << "LlistaA i LlistaB: " << superposicio(llistaA, llistaB) << endl; // 0 (false)
    cout << "LlistaA i LlistaC: " << superposicio(llistaA, llistaC) << endl; // 1 (true)

    // Prova amb entrada de l'usuari
    int n, m, valor;
    cout << "\nIntrodueix la mida de la primera llista: ";
    cin >> n;
    vector<int> llistaUsuari1;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> valor;
        llistaUsuari1.push_back(valor);
    }

    cout << "Introdueix la mida de la segona llista: ";
    cin >> m;
    vector<int> llistaUsuari2;
    for (int i = 0; i < m; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> valor;
        llistaUsuari2.push_back(valor);
    }

    if (superposicio(llistaUsuari1, llistaUsuari2))
        cout << "Les dues llistes tenen almenys un element en comú." << endl;
    else
        cout << "Les dues llistes no tenen elements en comú." << endl;

    return 0;
}