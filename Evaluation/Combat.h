#ifndef COMBAT_H
#define COMBAT_H

#include <string>

class Combat {
private:
    std::string niveau;

public:
    // Constructeur
    Combat(const std::string& niveau);
    ~Combat();

    // M�thode getter
    std::string getNiveau() const;
};

#endif  // COMBAT_H

