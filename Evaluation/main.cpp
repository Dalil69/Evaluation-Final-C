#include <iostream>
#include "Combat.h"

int main() {
    // Instanciation des objets Boxeur
    Boxeur boxeur_1("Box_1", 75.0);
    Boxeur boxeur_2("Box_2", 78.0);
    Boxeur boxeur_3("Box_3", 80.0);
    Boxeur boxeur_4("Box_4", 72.0);

    // Instanciation des objets Combat
    Combat demieFinale_1("1/2");
    Combat demieFinale_2("1/2");
    Combat finale("Finale");

    // Association entre les boxeurs et les combats de demie-finales
    demieFinale_1.setCoinBleu(&boxeur_1);
    demieFinale_1.setCoinRouge(&boxeur_2);

    demieFinale_2.setCoinBleu(&boxeur_3);
    demieFinale_2.setCoinRouge(&boxeur_4);

    // Désignation des vainqueurs des demie-finales et affectation dans la finale
    demieFinale_1.setVainqueur(demieFinale_1.designerVainqueur("bleu"));
    demieFinale_2.setVainqueur(demieFinale_2.designerVainqueur("rouge"));

    finale.setVainqueur(finale.getVainqueur());
    finale.setCoinRouge(demieFinale_2.getVainqueur());

    // Désignation du vainqueur de la finale
    finale.setVainqueur(finale.designerVainqueur("bleu"));

    // Affichage des résultats
    Combat combats[3] = { demieFinale_1, demieFinale_2, finale };
    Combat::AfficheResultats(combats, 3);


    return 0;
}
