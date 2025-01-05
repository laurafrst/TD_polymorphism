#ifndef MARIO_H
#define MARIO_H

#include "character.h"

class Mario : public Character {
public:
    // Déclaration de la méthode WhatAmI() pour Mario
    std::string WhatAmI() const override;  // Juste la déclaration ici
};

#endif // MARIO_H
