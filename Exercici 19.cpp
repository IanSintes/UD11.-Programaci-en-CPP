#include <iostream>
#include <vector>
using namespace std;

// Funció que retorna el valor més gran d'una llista
int gran_llista(const vector<int>& llista) {
    if (llista.empty()) {
        cout << "Error: la llista està buida!" << endl;
        return 0; // o algun valor sentinel
    }

    int max_val = llista[0];
    for (int x : llista) {
        if (x > max_val)
            max_val = x;
    }
    return max_val;
}

int main() {
    // Exemple fix
    vector<int> llista1 = {3, 4, 2, 3, 10};
    cout << "El major de {3, 4, 2, 3, 10} és: " << gran_llista(llista1) << endl;

    // Prova amb entrada de l'usuari
    int n, valor;
    cout << "\nIntrodueix la mida de la llista: ";
    cin >> n;
    vector<int> llistaUsuari;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> valor;
        llistaUsuari.push_back(valor);
    }

    cout << "El major de la llista introduïda és: " << gran_llista(llistaUsuari) << endl;

    return 0;
}