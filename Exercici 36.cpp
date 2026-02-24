#include <iostream>
using namespace std;

int main() {
    for (int repeticio = 1; repeticio <= 5; repeticio++) {
        for (int i = 1; i <= 15; i++) {
            cout << i << " ";
        }
        cout << endl; // salt de línia després de cada sèrie
    }
    return 0;
}