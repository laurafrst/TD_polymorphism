#include "character.h"

// Initialisation de la vitesse maximale
float Character::max_speed_ = 10;

// Constructeur par défaut
Character::Character() : speed_(0) {}

// Fonction pour accélérer le personnage
void Character::Accelerate() {
    if (speed_ < max_speed_) {
        speed_ += 1;
    }
}

// Fonction pour ralentir le personnage
void Character::Break() {
    if (speed_ > 0) {
        speed_ -= 1;
    }
}

// Fonction d'accès en ligne pour obtenir la vitesse actuelle
auto Character::speed() const -> decltype(speed_) {
    return speed_;
}

// Fonction statique pour définir la vitesse maximale
void Character::setMaxSpeed(float max_speed) {
    max_speed_ = max_speed;
}

// Fonction statique pour obtenir la vitesse maximale
float Character::maxSpeed() {
    return max_speed_;
}

// Destructeur
Character::~Character() { //vide ici car pas de mémoire à libérer
}
