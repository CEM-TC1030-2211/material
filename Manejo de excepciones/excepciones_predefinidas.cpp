#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main() {
    try {
        throw bad_cast{};
    } catch (exception e) {
        cout << e.what() << endl;
    }
}