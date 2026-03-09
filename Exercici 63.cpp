#include <iostream>
using namespace std;

// Funció que realitza la divisió amb control de zero
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: No es pot dividir per zero!" << endl;
        return 0; // retornem 0 o algun valor per defecte
    } else {
        return a / b;
    }
}

int main() {
    double num1, num2;
    cout << "Introdueix el numerador: ";
    cin >> num1;
    cout << "Introdueix el denominador: ";
    cin >> num2;

    double resultat = dividir(num1, num2);

    if (num2 != 0) {
        cout << "Resultat: " << resultat << endl;
    }

    return 0;
}