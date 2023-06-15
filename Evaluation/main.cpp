#include <iostream>
#include "Combat.h"

int main() {
    // Essais
    Combat combat_1("Comb_1_1/8");
    std::cout << "Adresse de combat_1 : " << &combat_1 << std::endl;
    std::cout << "Niveau de combat_1 : " << combat_1.getNiveau() << std::endl;

    return 0;
}
