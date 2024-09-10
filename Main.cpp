#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main() {

    std::vector<Character*> characters{ new Player,new Monster,new Boss };


    for (auto character : characters) {

        character->putStatus();
    }

    for (auto character : characters) {

        delete character;
    }

    return 0;
}