#include <string>
#include <iostream>
using namespace std;

class Infante {
protected:
    string nombre;
public:
    Infante(const string &nom) : nombre(nom) {}
    void gatear() {
        cout << nombre << " esta gateando...\n";
    }
};

class Joven : public Infante {
public:
    Joven(const string &nom) : Infante(nom) {}
    void correr() {
        cout << nombre << " esta corriendo...\n";
    }
};

class Adulto : public Joven {
public:
    Adulto(const string &nom) : Joven(nom) {}
    void caminar() {
        cout << nombre << " esta caminando...\n";
    }
};

int main() {
    Infante bebe("Agustin");
    Joven adolescente("David");
    Adulto persona("Jose");

    bebe.gatear();
    adolescente.gatear();  // Heredado de Infante
    adolescente.correr();
    persona.gatear();      // Heredado de Infante
    persona.correr();      // Heredado de Joven
    persona.caminar();

    return 0;
}