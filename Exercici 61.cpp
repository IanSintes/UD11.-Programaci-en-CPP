#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> parells;

    for (int i = 1; i <= 10; i++) {
        parells.push_back(i * 2); // els 10 primers números parells
    }

    cout << "Els 10 primers números parells: ";
    for (int n : parells) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}