#include <iostream>
#include <vector>
using namespace std;

// Funció que converteix una llista de dígits en un número
int Passar_a_Numero(const vector<int>& llista) {
    int numero = 0;

    for (size_t i = 0; i < llista.size(); i++) {
        numero = numero * 10 + llista[i];
    }

    return numero;
}

int main() {
    vector<int> digits = {3, 4, 1, 5};

    int numero = Passar_a_Numero(digits);

    cout << "Els dígits ";
    for (int d : digits) cout << d;
    cout << " corresponen al número: " << numero << endl;

    return 0;
}