#include "Boxeur.h"
#include <iostream>

Boxeur::Boxeur(const std::string& nom, double poids) : nom(nom), poids(poids) {
    std::cout << "Constructeur Boxeur : " << nom << std::endl;
}

Boxeur::~Boxeur() {
    std::cout << "Destructeur Boxeur : " << nom << std::endl;
}

std::string Boxeur::getNom() const {
    return nom;
}

double Boxeur::getPoids() const {
    return poids;
}

void Boxeur::setPoids(double poids) {
    this->poids = poids;
}

