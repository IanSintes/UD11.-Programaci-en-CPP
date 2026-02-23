#include <iostream>
#include <string>
using namespace std;

int main() {
    string binari;
    cout << "Introdueix un nombre binari: ";
    cin >> binari;

    // Convertim a enter utilitzant base 2
    int decimal = stoi(binari, nullptr, 2);

    cout << "El nombre decimal és: " << decimal << endl;

    return 0;
}