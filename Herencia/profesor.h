// #pragma once

#ifndef PROFESOR_H_
#define PROFESOR_H_

#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

class Profesor: public Persona {
private:
    int nomina;
public:
    Profesor(string nombre, int edad, int nomina):
        Persona{nombre, edad}, nomina{nomina} {}
    void impartirClase() {
        cout << nombre << " esta impartiendo clase." << endl;
    }
};

#endif