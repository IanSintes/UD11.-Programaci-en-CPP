#include <iostream>
#include <vector>
#include <cmath> // per pow
using namespace std;

int main() {
    int potencia;
    cout << "Introdueix la potència: ";
    cin >> potencia;

    vector<int> llista;

    for (int i = 0; i < 10; i++) {
        llista.push_back(static_cast<int>(pow(i, potencia)));
    }

    cout << "Llista dels 10 primers números elevats a " << potencia << ": ";
    for (int n : llista) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}