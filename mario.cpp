#include "mario.h"

// Implémentation de la méthode WhatAmI() pour Mario
std::string Mario::WhatAmI() const {
    return "Mario";
}

// Redéfinition de la méthode Accelerate() pour Mario
void Mario::Accelerate() {
    if (getSpeed() < maxSpeed()) {
        setSpeed(getSpeed() + 1); // Mario accélère plus lentement, avec un incrément de 1
    }
}
