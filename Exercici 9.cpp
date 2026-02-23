#include <iostream>
using namespace std;

// Funció que retorna el major de tres nombres
float gran_de_tres(float a, float b, float c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    // Proves fixes
    cout << "Major de (3, 7, 5): " << gran_de_tres(3, 7, 5) << endl;
    cout << "Major de (-1, -4, -2): " << gran_de_tres(-1, -4, -2) << endl;
    cout << "Major de (10, 10, 8): " << gran_de_tres(10, 10, 8) << endl;

    // Prova amb dades introduïdes per l'usuari
    float x, y, z;
    cout << "\nIntrodueix tres numeros: ";
    cin >> x >> y >> z;

    cout << "El major es: " << gran_de_tres(x, y, z) << endl;

    return 0;
}