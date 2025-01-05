#ifndef YOSHI_H
#define YOSHI_H

#include "character.h"

class Yoshi : public Character {
public:
    // Déclaration de la méthode WhatAmI() pour Yoshi (ne pas l'implémenter ici)
    std::string WhatAmI() const override;

    // Déclaration de la méthode Accelerate() redéfinie pour Yoshi
    void Accelerate() override;
};

#endif // YOSHI_H
