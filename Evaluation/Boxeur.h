#ifndef BOXEUR_H
#define BOXEUR_H

#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    Boxeur(const std::string& nom, double poids);
    ~Boxeur();

    // Accesseurs
    std::string getNom() const;
    double getPoids() const;
    void setPoids(double poids);
};

#endif  // BOXEUR_H

