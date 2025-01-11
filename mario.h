#ifndef MARIO_H
#define MARIO_H

#include "character.h"

class Mario : public Character {
public:
    // Declaration of the WhatAmI() method for Mario
    std::string WhatAmI() const override;

    // Redefinition of the Accelerate() method for Mario
    void Accelerate() override;
};

#endif // MARIO_H
