// #pragma once

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

class Estudiante: public Persona {
private:
    int matricula;
public:
    Estudiante(string nombre, int edad, int matricula):
        Persona{nombre, edad}, matricula{matricula} {}
    void tomarClase() {
        cout << nombre << " esta tomando clase." << endl;
    }
};

#endif