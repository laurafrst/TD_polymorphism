#ifndef YOSHI_H
#define YOSHI_H

#include "character.h"

class Yoshi : public Character {
public:
    // Déclaration de la méthode WhatAmI() pour Yoshi (ne pas l'implémenter ici)
    std::string WhatAmI() const override;
};

#endif // YOSHI_H
