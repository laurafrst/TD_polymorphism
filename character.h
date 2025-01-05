#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {

private:
    float speed_; // Vitesse actuelle du personnage
    static float max_speed_; // Vitesse maximale du personnage

public:
    // Constructeur par défaut
    Character();

    // Fonction pour accélérer le personnage
    void Accelerate();

    // Fonction pour freiner le personnage
    void Break();

    // Fonction d'accès en ligne pour obtenir la vitesse actuelle (int ou float, défini par auto)
    auto speed() const -> decltype(speed_);

    // Fonction statique pour définir la vitesse maximale
    static void setMaxSpeed(float max_speed);

    // Fonction statique pour obtenir la vitesse maximale
    static float maxSpeed();

    //Destructor
    ~Character();

    //Virtual WhatAmI
    virtual std::string WhatAmI() const = 0;
    //Cela signifie que WhatAmI est une fonction virtuelle pure et qu'elle doit être implémentée dans toute classe dérivée de Character
    //La classe Character devient une classe abstraite parce qu'elle contient une fonction virtuelle pure (WhatAmI)
    //Toute classe qui hérite de Character devra définir la fonction WhatAmI pour être instanciée.
    //Sinon, la classe dérivée sera également abstraite et ne pourra pas être instanciée.
};

#endif // CHARACTER_H
