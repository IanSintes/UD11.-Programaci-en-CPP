#include <iostream>
#include <vector>
using namespace std;

// Funció que mostra els nombres majors que un valor donat
void mostrar_majors_que(const vector<int>& llista, int valor) {
    cout << "Nombres superiors a " << valor << ": ";
    bool hiHa = false;
    for (int x : llista) {
        if (x > valor) {
            cout << x << " ";
            hiHa = true;
        }
    }
    if (!hiHa)
        cout << "Cap";
    cout << endl;
}

int main() {
    int n, valor;
    cout << "Introdueix el nombre de valors de la tupla: ";
    cin >> n;

    vector<int> tupla;
    int x;
    for (int i = 0; i < n; i++) {
        cout << "Valor " << i+1 << ": ";
        cin >> x;
        tupla.push_back(x);
    }

    valor = 18; // valor de referència
    mostrar_majors_que(tupla, valor);

    return 0;
}