#include <iostream>
using namespace std;

int main() {

    // Primera part (augment)
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Segona part (disminució)
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}