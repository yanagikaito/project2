#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"

int main() {

    std::vector<Character*> characters{ new Player,new Monster };


    for (auto character : characters) {

        character->putStatus();
    }

    for (auto character : characters) {

        delete character;
    }

    return 0;
}