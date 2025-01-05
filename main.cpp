#include <iostream>
#include "mario.h"
#include "yoshi.h"

int main() {
    Mario mario;
    Yoshi yoshi;

    std::cout << "Vitesse initiale de Mario : " << mario.speed() << std::endl;
    std::cout << "Vitesse initiale de Yoshi : " << yoshi.speed() << std::endl;

    std::cout << "Type de Mario : " << mario.WhatAmI() << std::endl;
    std::cout << "Type de Yoshi : " << yoshi.WhatAmI() << std::endl;

    return 0;
}
