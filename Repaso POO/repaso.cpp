#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Automovil {
private:
    string marca;
    int anio;
    string modelo;
public:
    // Automovil(string marca, int anio, string modelo) {
    //     this->marca = marca;
    //     this->anio = anio;
    //     this->modelo = modelo;
    // }
    Automovil(string marca, int anio, string modelo): 
        marca{marca}, anio{anio}, modelo{modelo} {}

    void encender() {
        cout << "Encendiendo " << modelo << "..." << endl;
    }

    void avanzar(int velocidad) {
        cout << "Avanzando a " << velocidad << " km/h..." << endl;
    }
    
};

int main() {
    Automovil coche{"Nissan", 2001, "Versa"};
    // coche.marca = "Infinity";
    coche.encender();
    coche.avanzar(60);

    Automovil coches[3] = {
        Automovil{"Nissan", 2001, "Versa"},
        Automovil{"Peugeot", 2011, "3008"},
        Automovil{"Volvo", 2020, "S60"}
    };

    for (int i = 0; i <= 2; i++) {
        coches[i].encender();
    }

    // coches[2].encender();

    // foreach
    for (Automovil a : coches) {
        a.encender();
    }

    vector <Automovil> coches2;

    coches2.push_back(Automovil{"Mitsubishi", 2019, "Eclipse"});
    // string marca, modelo;
    // int anio;
    // cout << "Introduce la marca: ";
    // cin >> marca;
    // cout << "Introduce el año: ";
    // cin >> anio;
    // cout << "Introduce el modelo: ";
    // cin >> modelo;
    // coches2.push_back(Automovil{marca, anio, modelo});

    for (int i=0; i<coches2.size(); i++) {
        coches2.at(i).encender();
    }

    for (Automovil a : coches2) {
        a.encender();
    }

};