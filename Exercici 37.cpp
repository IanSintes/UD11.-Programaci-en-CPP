#include <iostream>
using namespace std;

int main() {
    int num;

    // Control de rang
    do {
        cout << "Introdueix un número (1 - 20): ";
        cin >> num;

        if (num < 1 || num > 20) {
            cout << "Número fora de rang. Torna-ho a intentar.\n";
        }

    } while (num < 1 || num > 20);

    cout << "\nTaula de multiplicar del " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}