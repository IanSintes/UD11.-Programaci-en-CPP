#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Funció per convertir un string a int segons la base
int convertirBaseALdecimal(const string& num, int base) {
    int resultat;
    stringstream ss;
    ss << std::hex << num; // Inicialment per hexadecimal
    if (base == 10) {
        ss.clear();
        ss.str(num);
        ss >> resultat;
    } else if (base == 8) {
        resultat = stoi(num, nullptr, 8);
    } else if (base == 2) {
        resultat = stoi(num, nullptr, 2);
    } else if (base == 16) {
        resultat = stoi(num, nullptr, 16);
    }
    return resultat;
}

// Funció per imprimir un nombre en diferents bases
void mostrarResultat(int resultat) {
    cout << "Decimal: " << resultat << endl;
    cout << "Binari: ";
    for (int i = sizeof(int)*8-1; i >= 0; i--) {
        cout << ((resultat >> i) & 1);
    }
    cout << endl;
    cout << "Octal: " << oct << resultat << dec << endl;
    cout << "Hexadecimal: " << hex << resultat << dec << endl;
}

// Funció calculadora (només enters per simplificar bases)
int calcular(int a, int b, char operacio) {
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
    string num1_str, num2_str;
    int base1, base2;
    char operacio;

    cout << "Bases disponibles:\n1. Binari\n2. Octal\n3. Decimal\n4. Hexadecimal\n";
    cout << "Introdueix la base del primer numero (1-4): ";
    cin >> base1;
    cout << "Introdueix el primer numero: ";
    cin >> num1_str;

    cout << "Introdueix la base del segon numero (1-4): ";
    cin >> base2;
    cout << "Introdueix el segon numero: ";
    cin >> num2_str;

    cout << "Tria l'operacio (+, -, *, /): ";
    cin >> operacio;

    // Convertim bases a decimals
    int a = convertirBaseALdecimal(num1_str, (base1 == 1 ? 2 : (base1 == 2 ? 8 : (base1 == 3 ? 10 : 16))));
    int b = convertirBaseALdecimal(num2_str, (base2 == 1 ? 2 : (base2 == 2 ? 8 : (base2 == 3 ? 10 : 16))));

    int resultat = calcular(a, b, operacio);

    cout << "\nResultat en diferents bases:\n";
    mostrarResultat(resultat);

    return 0;
}