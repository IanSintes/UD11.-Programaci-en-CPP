#include <iostream>
using namespace std;

// Funció gran: retorna el nombre més gran
float gran(float a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    // Proves de la funció
    float x1 = 5.3, y1 = 7.2;
    float x2 = -2, y2 = -8;
    float x3 = 10, y3 = 10;

    cout << "Entre " << x1 << " i " << y1 << ", el major es: " << gran(x1, y1) << endl;
    cout << "Entre " << x2 << " i " << y2 << ", el major es: " << gran(x2, y2) << endl;
    cout << "Entre " << x3 << " i " << y3 << ", el major es: " << gran(x3, y3) << endl;

    // També podem provar amb números introduïts per l'usuari
    float a, b;
    cout << "Introdueix dos numeros per trobar el major: ";
    cin >> a >> b;
    cout << "El major es: " << gran(a, b) << endl;

    return 0;
}