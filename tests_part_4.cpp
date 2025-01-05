#include <iostream>
#include "mario.h"
#include "yoshi.h"

void testAcceleration(Character& character) {
    // Afficher la vitesse initiale
    std::cout << "Vitesse initiale de " << character.WhatAmI() << ": " << character.speed() << std::endl;

    // Accélérer 5 fois
    for (int i = 0; i < 5; ++i) {
        character.Accelerate();
        std::cout << "Vitesse après accélération " << i + 1 << ": " << character.speed() << std::endl;
    }
}

int main() {
    // Création d'objets Mario et Yoshi
    Mario mario;
    Yoshi yoshi;

    std::cout << "Test de l'accélération de Mario:" << std::endl;
    testAcceleration(mario);

    std::cout << "\nTest de l'accélération de Yoshi:" << std::endl;
    testAcceleration(yoshi);

    return 0;
}
