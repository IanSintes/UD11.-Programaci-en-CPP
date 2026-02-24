#include <iostream>
using namespace std;

// Funció que determina si un any és de traspàs
bool es_de_traspas(int any) {
    if ((any % 4 == 0 && any % 100 != 0) || (any % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int any;
    cout << "Introdueix un any: ";
    cin >> any;

    if (es_de_traspas(any))
        cout << any << " és un any de traspàs." << endl;
    else
        cout << any << " no és un any de traspàs." << endl;

    return 0;
}