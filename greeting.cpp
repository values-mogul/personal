// greeting.cpp
#include "greeting.h"

void displayGreeting(const std::string& name) {
    if (!name.empty()) {
        std::cout << "Hello, " << name << "! Welcome to C++." << std::endl;
    } else {
        std::cout << "Please enter your name." << std::endl;
    }
}
