#include <iostream>
#include "mario.h"
#include "yoshi.h"

void testInitialSpeed() {
    Mario mario; // Utilisation d'une classe dérivée
    std::cout << "Vitesse initiale (Mario): " << mario.speed() << std::endl;
}

void testAccelerate() {
    Yoshi yoshi; // Utilisation d'une classe dérivée
    std::cout << "Vitesse avant accélération (Yoshi): " << yoshi.speed() << std::endl;
    yoshi.Accelerate();
    std::cout << "Vitesse après accélération (Yoshi): " << yoshi.speed() << std::endl;
}

void testBreak() {
    Mario mario;
    mario.Accelerate();
    std::cout << "Vitesse avant freinage (Mario): " << mario.speed() << std::endl;
    mario.Break();
    std::cout << "Vitesse après freinage (Mario): " << mario.speed() << std::endl;
}

void testBreakBelowZero() {
    Yoshi yoshi;
    std::cout << "Vitesse initiale (Yoshi): " << yoshi.speed() << std::endl;
    yoshi.Break();
    std::cout << "Vitesse après freinage à 0 (Yoshi): " << yoshi.speed() << std::endl;
}

void testMaxSpeed() {
    Mario mario;
    Character::setMaxSpeed(5); // Modifier la vitesse maximale pour le test
    for (int i = 0; i < 10; ++i) {
        mario.Accelerate();
        std::cout << "Vitesse après accélération " << i + 1 << " (Mario): " << mario.speed() << std::endl;
    }
    std::cout << "Vitesse maximale atteinte (Mario): " << mario.speed() << std::endl;
}

int main() {
    testInitialSpeed();
    testAccelerate();
    testBreak();
    testBreakBelowZero();
    testMaxSpeed();
    return 0;
}
