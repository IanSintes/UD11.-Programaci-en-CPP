#include <iostream>
using namespace std;

// Funció calculadora
float calcular(float a, float b, char operacio) {
    switch (operacio) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                cout << "Error: no es pot dividir per zero." << endl;
                return 0;
            }
        default:
            cout << "Operacio no valida." << endl;
            return 0;
    }
}

int main() {
    float num1, num2;
    char operacio;

    cout << "Introdueix el primer numero: ";
    cin >> num1;

    cout << "Introdueix l'operacio (+, -, *, /): ";
    cin >> operacio;

    cout << "Introdueix el segon numero: ";
    cin >> num2;

    float resultat = calcular(num1, num2, operacio);

    cout << "Resultat: " << resultat << endl;

    return 0;
}