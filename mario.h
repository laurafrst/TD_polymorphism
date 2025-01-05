#ifndef MARIO_H
#define MARIO_H

#include "character.h"

class Mario : public Character {
public:
    // Déclaration de la méthode WhatAmI() pour Mario
    std::string WhatAmI() const override;

    // Redéfinition de la méthode Accelerate() pour Mario
    void Accelerate() override;
};

#endif // MARIO_H
