#include <iostream>
#include "Combat.h"

int main() {
    // Instanciation des objets Boxeur
    Boxeur boxeur_1("Box_1", 75.0);
    Boxeur boxeur_2("Box_2", 78.0);

    // Instanciation de l'objet Combat
    Combat combat_1("Comb_1_1/8");

    // Association entre combat_1 et boxeur_1
    combat_1.setCoinBleu(&boxeur_1);

    // Association entre combat_1 et boxeur_2
    combat_1.setCoinRouge(&boxeur_2);

    // Vérification des associations
    std::cout << "Combat 1 - Niveau : " << combat_1.getNiveau() << std::endl;
    std::cout << "Coin bleu : " << combat_1.getCoinBleu()->getNom() << std::endl;
    std::cout << "Coin rouge : " << combat_1.getCoinRouge()->getNom() << std::endl;

    return 0;
}
