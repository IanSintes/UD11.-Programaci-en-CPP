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

// Funció que dibuixa una imatge
void dibuixar_imatge() {
    // Cada nombre representa quants punts dibuixar a cada fila
    vector<int> imatge = {1, 3, 5, 3, 1};

    cout << "Dibuix de l'imatge:\n";
    crear_punts(imatge);
}

int main() {
    dibuixar_imatge();
    return 0;
}