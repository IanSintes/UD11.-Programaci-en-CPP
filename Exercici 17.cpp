#include <iostream>
#include <vector>
using namespace std;

// Funció que pinta punts segons els valors d'una llista
void crear_punts(const vector<int>& llista) {
    for (int x : llista) {
        for (int i = 0; i < x; i++) {
            cout << ".";
        }
        cout << endl; // salt de línia després de cada element
    }
}

int main() {
    // Exemple fix
    vector<int> llista1 = {2, 3, 4};
    cout << "Exemple 1:" << endl;
    crear_punts(llista1);

    // Prova amb llista introduïda per l'usuari
    int n, valor;
    cout << "\nIntrodueix el nombre d'elements de la llista: ";
    cin >> n;
    vector<int> llistaUsuari;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> valor;
        llistaUsuari.push_back(valor);
    }

    cout << "\nResultat:" << endl;
    crear_punts(llistaUsuari);

    return 0;
}