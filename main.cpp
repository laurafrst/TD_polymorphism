#include <iostream>
#include <vector>
#include "mario.h"
#include "yoshi.h"

int main() {
    Mario mario;
    Yoshi yoshi(5); // Yoshi with 5 crests

    std::cout << "Mario's initial speed: " << mario.speed() << std::endl;
    std::cout << "Yoshi's initial speed: " << yoshi.speed() << std::endl;

    std::cout << "Mario's type: " << mario.WhatAmI() << std::endl;
    std::cout << "Yoshi's type: " << yoshi.WhatAmI() << std::endl;

    // PART 5
    std::cout << "Let the race begin!" << std::endl;
    // Creating the STL container (vector here) to store characters
    std::vector<Character*> racers;
    // Adding Mario and Yoshi to the container
    racers.push_back(new Mario());
    racers.push_back(new Yoshi(3)); // Yoshi with 3 crests
    // Using an iterator to make the characters accelerate
    int i = 0;
    for (const auto& D : racers) {
        std::cout << "The racer " << i << " is " << D->WhatAmI()
                  << ". He has a speed of: " << D->speed() << std::endl;
        D->Accelerate();
        std::cout << "The racer " << i << " has accelerated. His new speed is: "
                  << D->speed() << std::endl;
        i += 1;
    }

    // Freeing the dynamically allocated memory
    for (auto D : racers) {
        delete D;
    }

    return 0;
}
