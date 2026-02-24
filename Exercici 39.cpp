#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introdueix un número: ";
    cin >> num;

    int temp = num;

    cout << "Dígits parells: ";

    // Recorrem els dígits del número des de l'últim
    string digitsParells = "";

    if (temp == 0) { // cas especial per 0
        cout << "0";
    } else {
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                // afegim al principi per conservar l'ordre original
                digitsParells = char(digit + '0') + digitsParells;
            }
            temp /= 10;
        }
        if (digitsParells.empty()) {
            cout << "No hi ha dígits parells";
        } else {
            cout << digitsParells;
        }
    }

    cout << endl;

    return 0;
}