#include <iostream>
#include "character.h"
#include "character.cpp"

void testInitialSpeed() {
    Character c;
    // Vérifie que la vitesse initiale est 0
    if (c.speed() == 0) {
        std::cout << "Test de vitesse initiale réussi" << std::endl;
    } else {
        std::cout << "Test de vitesse initiale échoué" << std::endl;
    }
}

void testAccelerate() {
    Character c;
    // Accélérer plusieurs fois
    int numAccelerations = 2;
    for (int i = 0; i < numAccelerations; ++i) {
        c.Accelerate();
    }
    // Vérifie que la vitesse après accélérations est égale à numAccelerations
    if (c.speed() == numAccelerations) {
        std::cout << "Test d'accélération réussi" << std::endl;
    } else {
        std::cout << "Test d'accélération échoué" << std::endl;
    }
}

void testBreak() {
    Character c;
    // Accélérer pour obtenir une vitesse de 3
    for (int i = 0; i < 3; ++i) {
        c.Accelerate();
    }

    // Freiner plusieurs fois
    int numBreaks = 2;
    for (int i = 0; i < numBreaks; ++i) {
        c.Break();
    }

    // Vérifie que la vitesse après freinage est correcte
    if (c.speed() == (3 - numBreaks)) {
        std::cout << "Test de freinage réussi" << std::endl;
    } else {
        std::cout << "Test de freinage échoué" << std::endl;
    }
}

void testBreakBelowZero() {
    Character c;
    // Accélérer pour obtenir une vitesse de 2
    for (int i = 0; i < 2; ++i) {
        c.Accelerate();
    }

    // Freiner plus que nécessaire avec une boucle
    int numBreaks = 3;
    for (int i = 0; i < numBreaks; ++i) {
        c.Break();
    }

    // Vérifie que la vitesse ne devient pas négative
    if (c.speed() == 0) {
        std::cout << "Test de freinage en dessous de zéro réussi" << std::endl;
    } else {
        std::cout << "Test de freinage en dessous de zéro échoué" << std::endl;
    }
}

void testMaxSpeed() {
    Character c;
    // Modifier la vitesse maximale
    Character::setMaxSpeed(15);

    // Accélérer jusqu'à la vitesse maximale avec une boucle
    while (c.speed() < Character::maxSpeed()) {
        c.Accelerate();
    }

    // Vérifie que la vitesse ne dépasse pas la vitesse maximale
    if (c.speed() == 15) {
        std::cout << "Test de vitesse maximale réussi" << std::endl;
    } else {
        std::cout << "Test de vitesse maximale échoué" << std::endl;
    }
}

void testStaticMaxSpeed() {

    // Modifier la vitesse maximale
    Character::setMaxSpeed(20);

    // Vérifie que la vitesse maximale a bien été modifiée
    if (Character::maxSpeed() == 20) {
        std::cout << "Test de la vitesse maximale statique réussi (valeur modifiée) !" << std::endl;
    } else {
        std::cout << "Test de la vitesse maximale statique échoué (valeur non modifiée) !" << std::endl;
    }
}

int main() {
    // Exécuter tous les tests
    testInitialSpeed();
    testAccelerate();
    testBreak();
    testBreakBelowZero();
    testMaxSpeed();
    testStaticMaxSpeed();

    return 0;
}
