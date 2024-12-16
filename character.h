#ifndef CHARACTER_H
#define CHARACTER_H

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

    // Fonction d'accès en ligne pour obtenir la vitesse actuelle
    auto speed() const;

    // Fonction statique pour définir la vitesse maximale
    static void setMaxSpeed(float max_speed);

    // Fonction statique pour obtenir la vitesse maximale
    static float maxSpeed();

    //Destructor
    ~Character();
};

#endif // CHARACTER_H
