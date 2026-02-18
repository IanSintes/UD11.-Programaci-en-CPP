#include <iostream>
using namespace std;

// Funció que comprova l'edat
void comprovarEdat(int edat) {
    if (edat > 18) {
        cout << "Ets major d'edat." << endl;
    } else if (edat == 18) {
        cout << "Tens exactament 18 anys." << endl;
    } else {
        cout << "No ets major d'edat." << endl;
    }
}

int main() {
    int edat;

    cout << "Introdueix la teva edat: ";
    cin >> edat;

    comprovarEdat(edat);

    return 0;
}
