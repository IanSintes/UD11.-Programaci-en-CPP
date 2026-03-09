#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Classe base abstracta Animal amb herència virtual
class Animal {
public:
    string especie;
    int edat;

    Animal(string e, int ed) : especie(e), edat(ed) {}

    virtual void xerrar() = 0;
    virtual void mourem() = 0;

    void quisoc() {
        cout << "Sóc un " << especie << " i tinc " << edat << " anys." << endl;
    }

    virtual ~Animal() {}
};

// Subclasses
class Cavall : virtual public Animal {
public:
    Cavall(int ed) : Animal("Cavall", ed) {}
    void xerrar() override { cout << "Neigh!" << endl; }
    void mourem() override { cout << "Galopant..." << endl; }
};

class Humà : virtual public Animal {
public:
    string nom;

    Humà(string n, int ed) : Animal("Humà", ed), nom(n) {}
    void xerrar() override { cout << "Hola!" << endl; }
    void mourem() override { cout << "Caminant..." << endl; }
};

// Abella amb mètode picar
class Abella : public Animal {
public:
    Abella(int ed) : Animal("Abella", ed) {}
    void xerrar() override { cout << "Bzzz!" << endl; }
    void mourem() override { cout << "Volant..." << endl; }
    void picar() { cout << "L'abella pica!" << endl; }
};

// Fiet hereta de Humà
class Fiet : public Humà {
public:
    vector<string> pares;

    // Important: cridem directament a Animal per l'herència virtual
    Fiet(string n, int ed, vector<string> p) : Animal("Humà", ed), Humà(n, ed), pares(p) {}

    void nompares() {
        cout << "Els pares de " << nom << " són: ";
        for (const auto& p : pares) cout << p << " ";
        cout << endl;
    }

    void xerrar() override { cout << "Hola, sóc el Fiet!" << endl; }
    void mourem() override { cout << "Caminant com un Fiet..." << endl; }
};

// Centaure hereta de Cavall i Humà (herència virtual evita duplicats)
class Centaure : public Cavall, public Humà {
public:
    Centaure(string n, int ed) : Animal("Centaure", ed), Cavall(ed), Humà(n, ed) {}

    void xerrar() override { cout << "Hola, sóc un Centaure!" << endl; }
    void mourem() override { cout << "Galopant i caminant..." << endl; }

    // Accedim explícitament a Animal::especie si cal
    void setEspecie(string e) { Animal::especie = e; }
};

// Classe independent Xou
class Xou {
public:
    void xerrar() { cout << "Xou parlant!" << endl; }
    void mourem() { cout << "Xou es mou..." << endl; }
    void quisoc() { cout << "Xou mostra informació." << endl; }
};

// Prova
int main() {
    Abella a(1);
    a.quisoc();
    a.xerrar();
    a.mourem();
    a.picar();

    Humà h("Anna", 30);
    h.quisoc();
    cout << "Nom: " << h.nom << endl;

    Fiet f("Joan", 10, {"Anna", "Marc"});
    f.quisoc();
    f.nompares();

    Centaure c("Centaureus", 100);
    c.quisoc();
    c.xerrar();
    c.mourem();
    c.setEspecie("Centaure"); // redefinim si volem

    Xou x;
    x.quisoc();
    x.xerrar();
    x.mourem();

    return 0;
}