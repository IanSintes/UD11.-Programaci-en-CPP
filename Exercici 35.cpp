#include <iostream>
using namespace std;

int main() {
    int num;

    // Entrada amb rang 1 - 900000
    do {
        cout << "Introdueix un número (1 - 900000): ";
        cin >> num;
        if (num < 1 || num > 900000) {
            cout << "Número fora de rang. Torna-ho a intentar.\n";
        }
    } while (num < 1 || num > 900000);

    int temp = num;
    int digits = 0;

    while (temp > 0) {
        temp /= 10; // eliminem l'últim dígit
        digits++;
    }

    cout << "El número " << num << " té " << digits << " dígits." << endl;

    return 0;
}