#include <iostream>
#include <string>
using namespace std;

void intercambiar(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 5;
    int *aptr = &a;
    int **aptrptra = &aptr;

    cout << "a: " << a << endl; // variable a
    cout << "&a: " << a << endl; // referencia a a (dirección en memoria donde está a)
    cout << "aptr: " << aptr << endl; // apuntador a la dirección de a
    cout << "&aptr" << &aptr << endl; // referencia al apuntador
    cout << "*aptr: " << *aptr << endl; // valor del lugar al que apunta mi apuntador

    a = 15;
    cout << "a: " << a << endl;
    cout << "aptr: " << aptr << endl;
    cout << "*aptr: " << *aptr << endl;

    *aptr = 20;
    cout << "a: " << a << endl;
    cout << "aptr: " << aptr << endl;
    cout << "*aptr: " << *aptr << endl;

    int x = 3;
    int y = 5;
    cout << "x: " << x << " - y: " << y << endl;
    intercambiar(&x,&y);
    cout << "x: " << x << " - y: " << y << endl;


}