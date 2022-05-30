#include <iostream>
#include <string>
using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;
public:
    Fraccion(int numerador, int denominador): numerador{numerador}, denominador{denominador} {}
    // int getNumerador() const {
    //     return numerador;
    // }
    // int getDenominador() const {
    //     return denominador;
    // }
    Fraccion operator+(const Fraccion &fraccion) {
        if (denominador == fraccion.denominador) {
            return Fraccion{numerador+fraccion.numerador, denominador};
        } else {
            int n = numerador * fraccion.denominador + fraccion.numerador * denominador;
            int d = denominador * fraccion.denominador;
            return Fraccion{n,d};
        }
    }
    Fraccion operator+(int entero) {
        return Fraccion{numerador + entero * denominador, denominador};
    }

    // Las funciones amigas no son miembros de la clase
    friend ostream& operator<<(ostream &os, const Fraccion &f1) {
        os << f1.numerador << " / " << f1.denominador;
        return os;
    }
};

int main() {
    Fraccion f1{1,2};
    Fraccion f2{2,3};
    Fraccion f3 = f1 + f2 + 1 + f1;
    cout << f1 << " + " << f2 << " = " << f3 << endl;
}