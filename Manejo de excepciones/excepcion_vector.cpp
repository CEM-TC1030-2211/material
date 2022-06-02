#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.push_back(2);

    try {
        v.at(5);
    } catch (out_of_range e) {
        cout << e.what() << endl;
    }

}