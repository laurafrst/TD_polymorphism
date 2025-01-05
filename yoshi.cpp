#include "yoshi.h"

// Implémentation de la méthode WhatAmI() pour Yoshi
std::string Yoshi::WhatAmI() const {
    return "Yoshi";
}

// Redéfinition de la méthode Accelerate() pour Yoshi
void Yoshi::Accelerate() {
    if (getSpeed() < maxSpeed()) {
        setSpeed(getSpeed() + 2); // Yoshi accélère plus rapidement, avec un incrément de 2
    }
}
