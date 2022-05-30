#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
protected:
    string nombre;
public:
    Animal(string nombre): nombre{nombre} {}
    virtual void sound() = 0; // Función virtual pura
};

class Dog: public Animal {
public:
    Dog(string nombre): Animal{nombre} {}
    // Para dejar de ser una clase abstracta, se debe asignar
    // un cuerpo a la función virtual pura
    void sound() {
        cout << "Woof, woof" << endl;
    }
};

class Cat: public Animal {
public:
    Cat(string nombre): Animal{nombre} {}
    void sound() {
        cout << "Meow, meow" << endl;
    }
};

int main() {
    // Error, la clase Animal tienre una función 
    // de tipo virtual pura
    // Animal a1{"Capibara"}; 
    Dog d1{"Firulais"};
    d1.sound();

    Cat c1{"Michi"};
    c1.sound();

    Animal *ptr = &d1;
    ptr->sound();

    ptr = &c1;
    ptr->sound();

    vector <Animal *> animales;
    animales.push_back(new Dog{"Rufus"});
    animales.push_back(new Cat{"Michi"});
    animales.push_back(new Dog{"Pompeyo"});

    animales.at(1)->sound();

    for (int i=0; i<animales.size(); i++) {
        animales.at(i)->sound();
    }

    for (Animal *p : animales) {
        p->sound();
    }

}