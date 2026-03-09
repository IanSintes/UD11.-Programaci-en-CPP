#include <iostream>
using namespace std;

int main() {

    for (int i = 5; i >= 1; i--) {        // controla cada línia
        for (int j = i; j >= 1; j--) {    // imprimeix números
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}