#ifndef YOSHI_H
#define YOSHI_H

#include "character.h"
#include <string>

class Yoshi : public Character {
public:
  // Constructor
  Yoshi(int crests);

  // Destructor to free the memory allocated for numCrests_
  virtual ~Yoshi();

  // Overridden WhatAmI() method to include the number of crests
  std::string WhatAmI() const override;

  // Set the number of crests
  void setCrests(int crests);

  // Overridden Accelerate() method for Yoshi
  void Accelerate() override;

private:
      int* numCrests_; // Number of crests, dynamically allocated

};

#endif // YOSHI_H
