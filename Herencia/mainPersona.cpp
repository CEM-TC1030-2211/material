#include <iostream>
#include <string>
#include "estudiante.h"
#include "profesor.h"
using namespace std;

int main() {
    Estudiante e1{"Pepe", 18, 12345};
    e1.presentarse();
    e1.tomarClase();

    Profesor p1{"Alfredo", 40, 98756};
    p1.presentarse();
    p1.impartirClase();

}