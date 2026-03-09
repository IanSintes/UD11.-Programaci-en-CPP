#include <iostream>
using namespace std;

// Funció per comprovar si un número és primer
bool es_primer(int n) {
    if (n < 2) return false; // 0 i 1 no són primers
    for (int i = 2; i*i <= n; i++) { // comprovem fins a la arrel quadrada
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int comptador = 0;

    cout << "Números primers entre 1 i 100:" << endl;

    for (int i = 1; i <= 100; i++) {
        if (es_primer(i)) {
            cout << i << " ";
            comptador++;
        }
    }

    cout << endl;
    cout << "Hi ha un total de " << comptador << " números primers entre 1 i 100." << endl;

    return 0;
}