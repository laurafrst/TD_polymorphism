#include <iostream>
#include "character.h"
#include "character.cpp"
#include "tests.cpp"


int main() {
    // Création d'un objet Character
    Character c;

    // Affichage de la vitesse initiale
    std::cout << "Vitesse initiale : " << c.speed() << std::endl;

    // Accélération de quelques unités
    c.Accelerate();
    c.Accelerate();
    std::cout << "Vitesse après accélération : " << c.speed() << std::endl;

    // Freinage de quelques unités
    c.Break();
    std::cout << "Vitesse après freinage : " << c.speed() << std::endl;

    // Changer la vitesse maximale
    Character::setMaxSpeed(15);
    std::cout << "Nouvelle vitesse maximale : " << Character::maxSpeed() << std::endl;

    return 0;
}
