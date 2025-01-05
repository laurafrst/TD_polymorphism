#include <iostream>
#include "mario.h"
#include "yoshi.h"


void testCharacter(Character &character) {
    // Afficher l'identité du personnage
    std::cout << "Identité du personnage: " << character.WhatAmI() << std::endl;

    // Tester l'accélération
    auto speed_initiale = character.speed();  // Le type est automatiquement déduit ici
    std::cout << "Vitesse initiale: " << speed_initiale << std::endl;
    character.Accelerate();
    std::cout << "Vitesse après accélération: " << character.speed() << std::endl;

    // Tester la décélération
    character.Break();
    std::cout << "Vitesse après freinage: " << character.speed() << std::endl;

    // Tester si la vitesse atteint la vitesse maximale
    character.Accelerate();
    character.Accelerate();
    std::cout << "Vitesse après plusieurs accélérations: " << character.speed() << std::endl;

    // Tester si la vitesse ne descend pas sous zéro
    character.Break();
    character.Break();
    std::cout << "Vitesse après plusieurs freinages: " << character.speed() << std::endl;
}

int main() {
    // Créer un objet Mario
    Mario mario;

    std::cout << "Test de Mario:" << std::endl;
    testCharacter(mario);
    std::cout << "------------------------------------" << std::endl;

    // Créer un objet Yoshi
    Yoshi yoshi;

    std::cout << "Test de Yoshi:" << std::endl;
    testCharacter(yoshi);
    std::cout << "------------------------------------" << std::endl;

    // Tester la vitesse maximale
    std::cout << "Vitesse maximale initiale: " << Character::maxSpeed() << std::endl;
    Character::setMaxSpeed(20);
    std::cout << "Nouvelle vitesse maximale: " << Character::maxSpeed() << std::endl;

    return 0;
}
