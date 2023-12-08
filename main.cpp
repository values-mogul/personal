// main.cpp
#include <iostream>
#include "greeting.h"

int main() {
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    displayGreeting(name);

    return 0;
}
