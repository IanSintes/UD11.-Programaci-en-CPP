#include <iostream>
#include <string>
using namespace std;

int main() {
    string paraula1, paraula2;

    cout << "Introdueix la primera paraula: ";
    cin >> paraula1;

    cout << "Introdueix la segona paraula: ";
    cin >> paraula2;

    // Convertim a minúscules per ignorar majúscules
    for (char& c : paraula1) c = tolower(c);
    for (char& c : paraula2) c = tolower(c);

    // Comprovem longitud mínima de 2 o 3
    int len1 = paraula1.length();
    int len2 = paraula2.length();

    if (len1 < 2 || len2 < 2) {
        cout << "Les paraules són massa curtes per rimar.\n";
        return 0;
    }

    // Rimen 3 darreres lletres
    if (len1 >= 3 && len2 >= 3 &&
        paraula1.substr(len1 - 3) == paraula2.substr(len2 - 3)) {
        cout << "Les paraules rimen.\n";
    }
    // Rimen 2 darreres lletres
    else if (paraula1.substr(len1 - 2) == paraula2.substr(len2 - 2)) {
        cout << "Les paraules rimen una mica.\n";
    }
    else {
        cout << "Les paraules no rimen.\n";
    }

    return 0;
}