#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {

private:
    float speed_; // Current speed of the character
    static float max_speed_; // Maximum speed of the character

protected:
      // Protected method to set the speed (allows derived classes to use it)
      void setSpeed(float newSpeed);

      // Protected method to get the current speed (allows derived classes to use it)
      float getSpeed() const;

public:
    // Default constructor
    Character();

    // Method to accelerate the character
    virtual void Accelerate();

    // Method to brake the character
    void Break();

    // Inline accessor method to get the current speed (int or float, determined by auto)
    auto speed() const -> decltype(speed_);

    // Static method to set the maximum speed
    static void setMaxSpeed(float max_speed);

    // Static method to get the maximum speed
    static float maxSpeed();

    // Destructor
    virtual ~Character() = default;

    // Virtual WhatAmI method
    virtual std::string WhatAmI() const = 0;
    // This means WhatAmI is a pure virtual function and must be implemented in any derived class of Character
    // The Character class becomes an abstract class because it contains a pure virtual function (WhatAmI)
    // Any class inheriting from Character must define the WhatAmI function to be instantiated.
    // Otherwise, the derived class will also be abstract and cannot be instantiated.
};

#endif // CHARACTER_H
