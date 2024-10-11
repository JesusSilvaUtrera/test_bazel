#include "hello_lib.h"

std::string greet() {
    return "Hello from C++ Library!";
}

std::string greet(const std::string& name) {
    return "Hello " + name;
}
