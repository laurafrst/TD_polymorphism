#include <iostream>
#include "mario.h"
#include "yoshi.h"

void testAcceleration(Character& character) {
    // Display the initial speed
    std::cout << "Initial speed of " << character.WhatAmI() << ": " << character.speed() << std::endl;

    // Accelerate 5 times
    for (int i = 0; i < 5; ++i) {
        character.Accelerate();
        std::cout << "Speed after acceleration " << i + 1 << ": " << character.speed() << std::endl;
    }
}

int main() {
    // Create Mario and Yoshi objects
    Mario mario;
    Yoshi yoshi;

    std::cout << "Mario's acceleration test:" << std::endl;
    testAcceleration(mario);

    std::cout << "\nYoshi's acceleration test:" << std::endl;
    testAcceleration(yoshi);

    return 0;
}
