#include <iostream>
using namespace std;

int main() {

    // Números parells
    cout << "Números parells fins a 100:" << endl;
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl << endl;

    // Números senars
    cout << "Números senars fins a 100:" << endl;
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}