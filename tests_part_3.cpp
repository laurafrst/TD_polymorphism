#include <iostream>
#include "mario.h"
#include "yoshi.h"

void testCharacter(Character &character) {
    // Display the character's identity
    std::cout << "Character identity: " << character.WhatAmI() << std::endl;

    // Test acceleration
    auto initial_speed = character.speed();  // Type is automatically inferred here
    std::cout << "Initial speed: " << initial_speed << std::endl;
    character.Accelerate();
    std::cout << "Speed after acceleration: " << character.speed() << std::endl;

    // Test deceleration
    character.Break();
    std::cout << "Speed after braking: " << character.speed() << std::endl;

    // Test if the speed reaches the maximum speed
    character.Accelerate();
    character.Accelerate();
    std::cout << "Speed after several accelerations: " << character.speed() << std::endl;

    // Test if the speed doesn't go below zero
    character.Break();
    character.Break();
    std::cout << "Speed after several brake actions: " << character.speed() << std::endl;
}

int main() {
    // Create a Mario object
    Mario mario;
    std::cout << "Mario's test:" << std::endl;
    testCharacter(mario);
    std::cout << "------------------------------------" << std::endl;

    // Create a Yoshi object
    Yoshi yoshi;
    std::cout << "Yoshi's test:" << std::endl;
    testCharacter(yoshi);
    std::cout << "------------------------------------" << std::endl;

    // Test the maximum speed
    std::cout << "Initial maximum speed: " << Character::maxSpeed() << std::endl;
    Character::setMaxSpeed(20);
    std::cout << "New maximum speed: " << Character::maxSpeed() << std::endl;

    return 0;
}
