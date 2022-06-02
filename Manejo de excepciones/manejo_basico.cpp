#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    float a = 5;
    float b = 2;
    float c = 2;

    float x1, x2;

    try {
        if (a == 0) {
            throw 10;
        }
        if (pow(b,2) < 4*a*c) {
            throw string{"b cuadrada es menor que 4ac"};
        }
        x1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
        x2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    } catch (int e) {
        cout << "a ocasiono una division entre 0." << endl;
    } catch (string e) {
        cout << e << endl;
    } catch (...) {
        cout << "Catch por default..." << endl;
    }

};