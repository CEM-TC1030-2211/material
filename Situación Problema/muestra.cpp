#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Cancion {
private:
    string track;
    string artist;
    string genre;
    float rating;
public:
    Cancion(string track, string artist, string genre, float rating):
        track{track}, artist{artist}, genre{genre}, rating{rating} {}
    friend ostream& operator<<(ostream &os, const Cancion &cancion) {
        os << cancion.track << " - " << cancion.artist << " - " << cancion.genre << " - " << cancion.rating;
        return os;
    }
};

class ListaReproduccion {
private:
    string nombre;
    vector <Cancion> canciones;
public:
    ListaReproduccion(string nombre): nombre{nombre} {}
    void cargar_archivo(string nombre_archivo, bool encabezado) {
        canciones.clear();
        ifstream archivo; // input file stream
        archivo.open(nombre_archivo);
        if (archivo.is_open()) {
            string aux;
            string track;
            string artist;
            string genre;
            float rating;
            if (encabezado)
                getline(archivo, aux);
            while (archivo.good()) {
                getline(archivo, aux, ',');
                getline(archivo, track, ',');
                getline(archivo, artist, ',');
                getline(archivo, genre, ',');
                getline(archivo, aux, '\n');
                rating = stof(aux);

                canciones.push_back(Cancion{track, artist, genre, rating});

            }
        }
    }

    void mostrar_canciones() {
        for (Cancion cancion : canciones) {
            cout << cancion << endl;
        }
    }
};

int main() {
    ListaReproduccion miLista{"Mi primera lista"};
    miLista.cargar_archivo("top50.csv", true);
    miLista.mostrar_canciones();
}