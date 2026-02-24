#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Funció que genera un codi secret de 4 xifres
string generarCodi() {
    string codi = "";
    for (int i = 0; i < 4; i++) {
        codi += to_string(rand() % 10); // dígits 0-9
    }
    return codi;
}

// Funció que compara el codi de l'usuari amb el codi secret
void compararCodis(const string& secret, const string& intent, int& encerts, int& coincidencies) {
    encerts = 0;
    coincidencies = 0;

    bool usatSecret[4] = {false, false, false, false};
    bool usatIntent[4] = {false, false, false, false};

    // Comptar encerts exactes
    for (int i = 0; i < 4; i++) {
        if (intent[i] == secret[i]) {
            encerts++;
            usatSecret[i] = true;
            usatIntent[i] = true;
        }
    }

    // Comptar coincidències (mateix dígit però posició incorrecta)
    for (int i = 0; i < 4; i++) {
        if (usatIntent[i]) continue;
        for (int j = 0; j < 4; j++) {
            if (usatSecret[j]) continue;
            if (intent[i] == secret[j]) {
                coincidencies++;
                usatSecret[j] = true;
                break;
            }
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string codiSecret = generarCodi();
    string intent;
    int encerts, coincidencies;
    int intents = 0;

    cout << "Benvingut al MasterMind simplificat!\n";
    cout << "Intenta endevinar el codi de 4 xifres (0-9).\n";

    do {
        cout << "\nIntrodueix el teu intent: ";
        cin >> intent;

        if (intent.length() != 4) {
            cout << "El codi ha de tenir 4 dígits. Torna-ho a intentar.\n";
            continue;
        }

        intents++;
        compararCodis(codiSecret, intent, encerts, coincidencies);

        if (encerts == 4) {
            cout << "Felicitats! Has encertat el codi en " << intents << " intents!\n";
            break;
        } else {
            cout << "Encerts exactes: " << encerts 
                 << ", coincidències: " << coincidencies << endl;
        }

    } while (true);

    // Mostrar codi secret
    cout << "El codi secret era: " << codiSecret << endl;

    return 0;
}