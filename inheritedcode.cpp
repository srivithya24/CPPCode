

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

using namespace std;
class BadLengthException : public exception {
private:
    string msg;
public:
    BadLengthException(int length) : msg(to_string(length)) {}
    virtual const char *what() const noexcept override {
        return msg.c_str();
    }
};
