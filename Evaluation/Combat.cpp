#include "Combat.h"
#include <iostream>

// Constructeur
Combat::Combat(const std::string& niveau) : niveau(niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
    std::cout << "Constructeur Combat : " << niveau << std::endl;
}

// Destructeur
Combat::~Combat() {
    std::cout << "Destructeur Combat : " << niveau << std::endl;
}

// Méthodes getter et setter pour coinBleu
Boxeur* Combat::getCoinBleu() const {
    return coinBleu;
}

void Combat::setCoinBleu(Boxeur* boxeur) {
    coinBleu = boxeur;
}

// Méthodes getter et setter pour coinRouge
Boxeur* Combat::getCoinRouge() const {
    return coinRouge;
}

void Combat::setCoinRouge(Boxeur* boxeur) {
    coinRouge = boxeur;
}
void Combat::setVainqueur(Boxeur* boxeur) {
    vainqueur = boxeur;
}
Boxeur* Combat::getVainqueur() const {
    return vainqueur;
}


// Méthode pour designer le vainqueur
Boxeur* Combat::designerVainqueur(const std::string& couleurCoin) {
    if (couleurCoin == "bleu") {
        vainqueur = coinBleu;
    }
    else if (couleurCoin == "rouge") {
        vainqueur = coinRouge;
    }
    else {
        vainqueur = nullptr;
    }

    return vainqueur;

}
