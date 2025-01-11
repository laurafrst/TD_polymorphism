#include "yoshi.h"
#include <string>

// Constructor implementation
Yoshi::Yoshi(int crests) {
    numCrests_ = new int(crests); // Manual allocation for the number of crests
}

// Destructor implementation
Yoshi::~Yoshi() {
    delete numCrests_; // Free the memory allocated for numCrests_
}

// WhatAmI() method implementation
std::string Yoshi::WhatAmI() const {
    // Return the formatted string with the number of crests
    return std::to_string(*numCrests_) + " crested Yoshi";
}

// Accelerate() method implementation for Yoshi
void Yoshi::Accelerate() {
    if (getSpeed() < maxSpeed()) {
        setSpeed(getSpeed() + 2); // Yoshi accelerates faster, with an increment of 2
    }
}

// setCrests method implementation
void Yoshi::setCrests(int crests) {
    *numCrests_ = crests; // Updates the number of crests
}
