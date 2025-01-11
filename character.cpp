#include "character.h"

// Initialization of the maximum speed
float Character::max_speed_ = 10;

// Default constructor
Character::Character() : speed_(0) {}

// Method to accelerate the character
void Character::Accelerate() {
    if (speed_ < max_speed_) {
        speed_ += 1;
    }
}

// Method to brake the character
void Character::Break() {
    if (speed_ > 0) {
        speed_ -= 1;
    }
}

// Inline accessor method to get the current speed
auto Character::speed() const -> decltype(speed_) {
    return speed_;
}

// Static method to set the maximum speed
void Character::setMaxSpeed(float max_speed) {
    max_speed_ = max_speed;
}

// Static method to get the maximum speed
float Character::maxSpeed() {
    return max_speed_;
}

// Protected method to set the speed
void Character::setSpeed(float newSpeed) {
    speed_ = newSpeed;
}

// Protected method to get the speed
float Character::getSpeed() const {
    return speed_;
}
