#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string paraula;
    cout << "Introdueix una paraula: ";
    cin >> paraula;

    vector<char> llista;

    for (char c : paraula) {
        llista.push_back(c);
    }

    cout << "Llista de lletres: ";
    for (char c : llista) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}