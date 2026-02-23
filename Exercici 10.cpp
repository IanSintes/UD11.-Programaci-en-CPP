#include <iostream>
using namespace std;

// Funció que calcula la longitud d'un array
int longitudArray(int array[], int mida) {
    return mida;
}

int main() {
    int numeros[] = {4, 7, 2, 9, 1};
    int mida = sizeof(numeros) / sizeof(numeros[0]);

    cout << "La longitud de la llista es: "
         << longitudArray(numeros, mida) << endl;

    return 0;
}