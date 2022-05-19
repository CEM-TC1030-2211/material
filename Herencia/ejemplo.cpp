#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad): nombre{nombre}, edad{edad} {}
    // string getNombre() {
    //     return nombre;
    // }
    // void setNombre(string nuevo_nombre) {
    //     nombre = nuevo_nombre;
    // }
    void saludar() {
        cout << nombre << " dice hola." << endl;
    }
};

class Trabajador: public Persona {
private:
    int anios_trabajando;
public:
    Trabajador(string nombre, int edad, int anios_trabajando):
        Persona{nombre, edad}, anios_trabajando{anios_trabajando} {}
    void trabajar() {
        cout << nombre << " esta trabajando." << endl;
    }
};

class Abogado: public Trabajador {
private:
    string especialidad;
public:
    Abogado(string nombre, int edad, int anios_trabajando, string especialidad):
        Trabajador{nombre, edad, anios_trabajando}, especialidad{especialidad} {}
    void trabajar() {
        cout << nombre << " esta defendiendo a su cliente." << endl;
    }
};

int main() {
    Persona p1{"Juan", 25};
    p1.saludar();
    Trabajador t1{"Luis", 60, 23};
    t1.saludar();
    t1.trabajar();
    Abogado a1{"Manuel", 19, 2, "Fiscal"};
    a1.saludar();
    a1.trabajar();
}