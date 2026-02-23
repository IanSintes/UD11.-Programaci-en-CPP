#include <iostream>
#include <vector>
using namespace std;

// Funció que suma tots els elements d'una llista
int sumar_llista(const vector<int>& llista) {
    int suma = 0;
    for (int x : llista) {
        suma += x;
    }
    return suma;
}

// Funció que multiplica tots els elements d'una llista
int multiplicar_llista(const vector<int>& llista) {
    int producte = 1;
    for (int x : llista) {
        producte *= x;
    }
    return producte;
}

int main() {
    vector<int> llista1 = {1, 2, 3, 4};
    vector<int> llista2 = {5, 3, 2};
    
    cout << "Llista1: {1, 2, 3, 4}" << endl;
    cout << "Suma: " << sumar_llista(llista1) << endl;         // 10
    cout << "Producte: " << multiplicar_llista(llista1) << endl; // 24

    cout << "\nLlista2: {5, 3, 2}" << endl;
    cout << "Suma: " << sumar_llista(llista2) << endl;         // 10
    cout << "Producte: " << multiplicar_llista(llista2) << endl; // 30

    // Prova amb entrada de l'usuari
    int n, valor;
    cout << "\nIntrodueix el nombre d'elements: ";
    cin >> n;
    vector<int> llistaUsuari;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> valor;
        llistaUsuari.push_back(valor);
    }

    cout << "Suma: " << sumar_llista(llistaUsuari) << endl;
    cout << "Producte: " << multiplicar_llista(llistaUsuari) << endl;

    return 0;
}