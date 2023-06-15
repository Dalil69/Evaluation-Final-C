#ifndef COMBAT_H
#define COMBAT_H

#include <string>
#include "Boxeur.h"

class Combat {
private:
    std::string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    // Constructeur
    Combat(const std::string& niveau);
    ~Combat();

    // Méthodes getter et setter pour coinBleu et coinRouge
    Boxeur* getCoinBleu() const;
    void setCoinBleu(Boxeur* boxeur);
    Boxeur* getCoinRouge() const;
    void setCoinRouge(Boxeur* boxeur);
    void setVainqueur(Boxeur* boxeur);
    Boxeur* getVainqueur() const;


    // Fonction pour afficher les résultats
    static void AfficheResultats(Combat combats[], int taille);


    // Méthode pour designer le vainqueur
    Boxeur* designerVainqueur(const std::string& couleurCoin);
};

#endif  // COMBAT_H