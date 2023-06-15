#include "Combat.h"
#include <iostream>

// Constructeur
Combat::Combat(const std::string& niveau) : niveau(niveau) {
    std::cout << "Constructeur Combat : " << niveau << std::endl;
}

// Destructeur
Combat::~Combat() {
    std::cout << "Destructeur Combat : " << niveau << std::endl;
}

// Méthode getter
std::string Combat::getNiveau() const {
    return niveau;
}
