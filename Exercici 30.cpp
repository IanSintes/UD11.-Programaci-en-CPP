#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

// Funció on expliquem què passa
void intro() {
    cout << "En una època on els gegants governen Menorca. Nosaltres necessitem menjar,\n"
         << "Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.\n"
         << "Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran\n"
         << "i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.\n";
}

// Funció on demanem a quin talaiot volem anar
string canviTalaiot() {
    string talaiot;
    while (talaiot != "1" && talaiot != "2") {
        cout << "A quin Talaiot vols anar? Introdueixi 1 o 2: ";
        cin >> talaiot;
    }
    return talaiot;
}

// Ara retorna true si guanya, false si perd
bool trobada(string canviTalaiot) {
    cout << "T'estas apropant al talaiot...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Està fosc i és tenebrós...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Un gran gegant salta davant teu, t'agafa i ...\n\n";
    this_thread::sleep_for(chrono::seconds(2));

    int gegantamic = rand() % 2 + 1;

    if (canviTalaiot == to_string(gegantamic)) {
        cout << "Et convida a menjar...\n";
        return true;
    } else {
        cout << "Se't menja d'un mos... ÑAMÑAMÑAM\n";
        return false;
    }
}

// Funció principal
int main() {
    srand(static_cast<unsigned int>(time(0))); // Inicialitzam rand una sola vegada

    int punts = 0;
    string partidaNova = "si";

    while (partidaNova == "s" || partidaNova == "si") {
        intro();
        string nTalaiot = canviTalaiot();

        bool guanya = trobada(nTalaiot);

        if (guanya) {
            punts++;
            cout << "Has guanyat! Punts actuals: " << punts << "\n";
        } else {
            cout << "Has perdut!\n";
            break; // acaba la partida si perd
        }

        cout << "Vols tornar a jugar? Introdueixi si o no: ";
        cin >> partidaNova;
        cout << "\n";
    }

    cout << "La partida ha acabat. Punts totals aconseguits: " << punts << endl;

    return 0;
}