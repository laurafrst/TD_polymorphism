#include <iostream>
#include "mario.h"
#include "yoshi.h"

void testInitialSpeed() {
    Mario mario; // Using a derived class
    std::cout << "Initial speed (Mario): " << mario.speed() << std::endl;
}

void testAccelerate() {
    Yoshi yoshi; // Using a derived class
    std::cout << "Speed before acceleration (Yoshi): " << yoshi.speed() << std::endl;
    yoshi.Accelerate();
    std::cout << "Speed after acceleration (Yoshi): " << yoshi.speed() << std::endl;
}

void testBreak() {
    Mario mario;
    mario.Accelerate();
    std::cout << "Speed before braking (Mario): " << mario.speed() << std::endl;
    mario.Break();
    std::cout << "Speed after braking (Mario): " << mario.speed() << std::endl;
}

void testBreakBelowZero() {
    Yoshi yoshi;
    std::cout << "Initial speed (Yoshi): " << yoshi.speed() << std::endl;
    yoshi.Break();
    std::cout << "Speed after braking to 0 (Yoshi): " << yoshi.speed() << std::endl;
}

void testMaxSpeed() {
    Mario mario;
    Character::setMaxSpeed(5); // Set maximum speed for the test
    for (int i = 0; i < 10; ++i) {
        mario.Accelerate();
        std::cout << "Speed after acceleration " << i + 1 << " (Mario): " << mario.speed() << std::endl;
    }
    std::cout << "Maximum speed reached (Mario): " << mario.speed() << std::endl;
}

int main() {
    testInitialSpeed();
    testAccelerate();
    testBreak();
    testBreakBelowZero();
    testMaxSpeed();
    return 0;
}
