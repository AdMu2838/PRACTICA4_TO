#include <iostream>
using namespace std;

class Mamifero {
public:
    Mamifero() : edad(0) { cout << "Mamifero constructor...\n"; }
    virtual ~Mamifero() { cout << "Mamifero destructor...\n"; }
    virtual void Move() const { cout << "Mamifero se mueve un paso\n"; }
    virtual void Speak() const { cout << "Mamifero habla!\n"; }

protected:
    int edad;
};

class Dog : public Mamifero {
public:
    Dog() { cout << "Dog constructor...\n"; }
    ~Dog() { cout << "Dog destructor...\n"; }
    void WagTail() { cout << "Wagging Tail...\n"; }
    void Move() const override { cout << "Dog moves 5 steps...\n"; }
    void Speak() const override { cout << "Woof!\n"; }
};

class Cat : public Mamifero {
public:
    Cat() { cout << "Cat constructor...\n"; }
    ~Cat() { cout << "Cat destructor...\n"; }
    void Purr() { cout << "Purring...\n"; }
    void Move() const override { cout << "Cat moves gracefully...\n"; }
    void Speak() const override { cout << "Meow!\n"; }
};

int main() {
    Mamifero* mamiferos[2];
    mamiferos[0] = new Dog();
    mamiferos[1] = new Cat();

    for(int i = 0; i < 2; ++i) {
        mamiferos[i]->Move();
        mamiferos[i]->Speak();
    }

    for(int i = 0; i < 2; ++i) {
        delete mamiferos[i];
    }

    return 0;
}

