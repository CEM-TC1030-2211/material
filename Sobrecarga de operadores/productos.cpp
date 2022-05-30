#include <iostream>
#include <string>
using namespace std;

class Producto {
protected:
    int cantidad;
    float precio;
public:
    Producto(int cantidad, float precio): cantidad{cantidad}, precio{precio} {}
    virtual void imprimir() const = 0;
    // lhs = left hand side
    // rhs = right hand side
    friend float operator+(float lhs, const Producto &rhs) {
        return lhs + rhs.cantidad * rhs.precio;
    }
    friend ostream& operator<<(ostream &os, const Producto &producto) {
        producto.imprimir();
        return os;
    }
};

class Libro: public Producto {
private:
    string titulo;
    string autor;
public:
    Libro(string titulo, string autor, int cantidad, float precio):
        Producto{cantidad, precio}, titulo{titulo}, autor{autor} {}
    void imprimir() const {
        cout << titulo << " - " << autor << " - " << cantidad << " - " << precio;
    }
};

class Pelicula: public Producto {
private:
    string titulo;
    int duracion;
public:
    Pelicula(string titulo, int duracion, int cantidad, float precio):
        Producto{cantidad, precio}, titulo{titulo}, duracion{duracion} {}
    void imprimir() const {
        cout << titulo << " - " << duracion << " - " << cantidad << " - " << precio;
    }
};

int main() {
    Producto *miCarrito[3];
    miCarrito[0] = new Libro{"Astrophysics for People in a Hurry", "Neil Degrasse Tyson", 1, 500};
    miCarrito[1] = new Pelicula{"Spider-Man: No Way Home", 150, 2, 300};
    miCarrito[2] = new Pelicula{"King Richard", 144, 1, 250};

    float total = 0;
    for (Producto *ptr : miCarrito) {
        cout << *ptr << endl;
        total = total + *ptr;
        // total += *ptr;
    }

    cout << "Total a pagar: " << total << endl;

}