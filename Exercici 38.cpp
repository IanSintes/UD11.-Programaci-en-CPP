#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introdueix un número: ";
    cin >> num;

    int suma = 0;
    int temp = num;

    // Sumem els dígits
    while (temp != 0) {
        suma += temp % 10; // agafem l'últim dígit
        temp /= 10;        // eliminem l'últim dígit
    }

    cout << "La suma dels dígits és: " << suma << endl;

    if (suma % 2 == 0)
        cout << "La suma és parell." << endl;
    else
        cout << "La suma és senar." << endl;

    return 0;
}