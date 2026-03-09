#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int suma = 0;

    cout << "Introdueix el primer número: ";
    cin >> num1;

    cout << "Introdueix el segon número: ";
    cin >> num2;

    for (int i = num1; i <= num2; i++) {
        suma += i;
    }

    cout << "La suma dels números entre " << num1 << " i " << num2 
         << " és: " << suma << endl;

    return 0;
}