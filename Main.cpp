#include <iostream>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Boss.h"

int main() {

    std::vector<Character*> characters{ new Player,new Monster,new Boss };

    for (auto it = characters.begin(); it != characters.end(); ++it) {
        for (auto character : characters) {
            (*it)->putStatus();
        }
    }
    std::cout << std::endl;

    for (auto character : characters) {

        delete character;
    }

    return 0;
}