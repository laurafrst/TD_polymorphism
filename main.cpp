#include <iostream>
#include <vector>
#include "mario.h"
#include "yoshi.h"

int main() {
    Mario mario;
    Yoshi yoshi;

    std::cout << "Mario's initial speed : " << mario.speed() << std::endl;
    std::cout << "Yoshi's initial speed : " << yoshi.speed() << std::endl;

    std::cout << "Mario's type : " << mario.WhatAmI() << std::endl;
    std::cout << "Yoshi's type : " << yoshi.WhatAmI() << std::endl;

    //PART 5
    std::cout << "Let's the race begin!" << std::endl;
    // Création du conteneur STL (ici un vecteur) pour stocker les personnages
    std::vector<Character*> characters;
    //ajout de Mario et Yoshi dans le conteneur
    characters.push_back(new Mario());
    characters.push_back(new Yoshi());
    // Utilisation d'un itérateur pour faire accélérer les personnages
    int i = 0;
    for (const auto& D : characters) {
        std::cout << "The driver " << i << " is " << D->WhatAmI()
                  << ". He has a speed of: " << D->speed() << std::endl;
        D->Accelerate();
        std::cout << "The driver " << i << " has accelerated. His new speed is: "
                  << D->speed() << std::endl;
        i += 1;
    }

    // Libération de la mémoire allouée dynamiquement
    for (auto D : characters) {
        delete D;
    }

    return 0;
}
