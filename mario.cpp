#include "mario.h"

// Implementation of the WhatAmI() method for Mario
std::string Mario::WhatAmI() const {
    return "Mario";
}

// Redefinition of the Accelerate() method for Mario
void Mario::Accelerate() {
    if (getSpeed() < maxSpeed()) {
        setSpeed(getSpeed() + 1); // Mario accelerates slower, with an increment of 1
    }
}
