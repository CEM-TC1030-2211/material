#include <iostream>
#include <string>
#include <exception>
using namespace std;

class MyException: public exception {
private:
    string message;
public:
    MyException(const string &message): message{message} {}

    virtual const char* what() {
        return message.c_str();
    }

};

int main() {
    try {
        throw MyException{"Algo salio muy mal..."};
    } catch (MyException e) {
        cout << e.what() << endl;
    }
}