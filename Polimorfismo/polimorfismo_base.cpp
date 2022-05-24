#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal noises..." << endl;
    }
};

class Dog: public Animal {
public:
    void sound() {
        cout << "Woof, woof..." << endl;
    }
};

class Cat: public Animal {
public:
    void sound() {
        cout << "Meow, meow..." << endl;
    }
};

void metodo_referencia(Animal &animal) {
    animal.sound();
}

void metodo_apuntador(Animal *animal) {
    animal->sound();
}

int main() {
    Animal a1{};
    Dog d1{};
    Cat c1{};

    a1.sound();
    d1.sound();
    c1.sound();

    Animal *aptr = &d1;
    aptr->sound();

    vector <Animal *> animales;
    animales.push_back(new Dog{});
    animales.push_back(new Cat{});
    animales.push_back(new Cat{});

    for (int i=0; i<animales.size(); i++) {
        animales[i]->sound();
    }

    for (Animal *ptr : animales) {
        ptr->sound();
    }

    metodo_referencia(d1);
    metodo_apuntador(&d1);

    metodo_referencia(*aptr);
    metodo_apuntador(aptr);

    Animal *myAnimals[3];
    myAnimals[0] = new Dog{};
    myAnimals[1] = new Cat{};
    myAnimals[2] = new Cat{};

    for (int i = 0; i < 3; i++) {
        myAnimals[i]->sound();
    }

    for (Animal *animali : myAnimals) {
        animali->sound();
    }

}