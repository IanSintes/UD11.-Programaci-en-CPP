#include <iostream>
#include <vector>
#include <sstream> // per istringstream
#include <string>
using namespace std;

// Funció que retorna un vector amb la longitud de cada paraula
vector<int> lenp(const string& frase) {
    vector<int> longituds;
    istringstream iss(frase);
    string paraula;

    while (iss >> paraula) {
        longituds.push_back(paraula.length());
    }

    return longituds;
}

int main() {
    string frase;
    cout << "Introdueix una frase: ";
    getline(cin, frase); // permet espais

    vector<int> resultat = lenp(frase);

    cout << "Longitud de cada paraula: ";
    for (int l : resultat) cout << l << " ";
    cout << endl;

    return 0;
}