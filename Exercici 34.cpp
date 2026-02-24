#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introdueix un número menor que 100: ";
    cin >> num;

    if (num >= 100) {
        cout << "Número no vàlid. Ha de ser menor que 100." << endl;
        return 0;
    }

    int suma = 0;

    // Restem 4 al número i sumem quadrats
    for (int i = num - 4; i >= 0; i -= 4) {
        suma += i * i;
    }

    cout << "La suma dels quadrats separats per 4 és: " << suma << endl;

    return 0;
}