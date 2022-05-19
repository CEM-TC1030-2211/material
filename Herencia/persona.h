// #pragma once

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad): nombre{nombre}, edad{edad} {}
    void presentarse() {
        cout << "Hola, soy " << nombre << endl;
    }
};

#endif